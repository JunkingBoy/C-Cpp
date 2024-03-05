#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <curl/curl.h>
#include <windows.h>
#include <pthread.h>
size_t write_call_back(void *ptr, size_t size, size_t nmemb, void *stream);
double send_get_request(const char *url);
double send_post_request(const char *url, const char *body, const char *content_type);
void *send_requests_thread(void *url_ptr);
void print_usage();
void process_arguments(int argc, char *argv []);
const char *get_json_file(const char *file_name);

// 并发数量和请求次数
int num_concurrent = 1;
int num_requests = 1;
// 判断发送Get还是Post请求
int found_G = 0;
int found_P = 0;
// 总请求时间
double total_time;
// double average_time;

// PostBody
FILE *body_file;
const char *send_body;
const char *url = NULL;

int main(int argc, char *argv [])
{
    // 解析命令行
    process_arguments(argc, argv);

    // 最少参数数量
    if (argc < 3)
    {
        print_usage();

        getchar();

        return 1;
    }

    /**
     * 并发发送请求
    */
    // 创建多个线程
    pthread_t threads[num_concurrent];
    for (int i = 0; i < num_concurrent; i++)
    {
        if (pthread_create(&threads[i], NULL, send_requests_thread, (void *)url) != 0) {
            fprintf(stderr, "Error: Failed to create thread\n");
            return 1;
        }
    }

    // 等待所有线程结束
    for (int i = 0; i < num_concurrent; i++)
    {
        pthread_join(threads[i], NULL);
    }

    getchar();

    return 0;
}

// 解析命令行参数
void process_arguments(int argc, char *argv [])
{
    int found_B = 0;

    for (int i = 1; i < argc; i++)
    {
        // 检查字符
        switch (argv[i][1])
        {
            case 'H':
                print_usage();
                exit(1);
            case 'R':
                if (i + 1 < argc && argv[i + 1][0] != '-') {
                        url = argv[++i]; // 存储 URL 参数
                    } else {
                        fprintf(stderr, "Error: Missing URL after -R\n");
                        exit(1);
                    }
                    break;
            case 'G':
                found_G = 1;
                break;
            case 'P':
                found_P = 1;
                if (i + 1 < argc && strcmp(argv[i + 1], "-B") == 0)
                {
                    if (i + 2 < argc || argv[i + 2][0] == '-')
                    {
                        fprintf(stderr, "Error: Missing file path after -B\n");
                        exit(1);
                    }
                    const char *file_name = argv[i + 2];
                    send_body = get_json_file(file_name);
                    if (send_body == NULL)
                    {
                        fprintf(stderr, "Error: File is not a non-empty JSON file: %s\n", file_name);
                        exit(1);
                    }
                }
                else
                {
                    fprintf(stderr, "Error: First Missing argument -B after -P\n");
                    exit(1);
                }
                break;
            case 'C':
                if (i + 1 < argc)
                {
                    num_concurrent = atoi(argv[++i]);
                    printf("Num_concurrent: %d\n", num_concurrent);
                    if (num_concurrent <= 0)
                    {
                        fprintf(stderr, "Error: Invalid concurrency level\n");
                        exit(1);
                    }
                    i++;
                }
                break;
            case 'T':
                printf("Into_T");
                if (i + 1 < argc)
                {
                    num_requests = atoi(argv[i++]);
                    printf("Num_Requests: %d\n", num_requests);
                    if (num_requests <= 0)
                    {
                        fprintf(stderr, "Error: Invalid number of requests\n");
                        exit(1);
                    }
                }
                break;
            default:
                fprintf(stderr, "Error: Unknown option %s\n", argv[i]);
                exit(1);
        }
    }

    if (!found_G && !found_P)
    {
        fprintf(stderr, "Error: Missing required argument -G or -P\n");
        exit(1);
    }
    else if (found_P && !found_B)
    {
        fprintf(stderr, "Missing required argument -B after -P\n");
        exit(1);
    }
}

// 程序用法
void print_usage()
{
    printf("Usage: program.exe  [-H <help>] -R <URL> [-G | -P [-B <body_file>]] [-C <concurrency>] [-T <num_requests>]\n");
    printf("Options:\n");
    printf("  -H                   How to use tool\n");
    printf("  -R <URL>             Specify the URL to send requests to\n");
    printf("  -G                   Send GET requests\n");
    printf("  -P                   Send POST requests\n");
    printf("  -B <body_file>       Specify the body file to send in the request (must be a JSON file)\n");
    printf("  -C <concurrency>     Specify the concurrency level (default: 1)\n");
    printf("  -T <num_requests>    Specify the number of requests to send (default: 1)\n");
}

// 封装发送请求
void *send_requests_thread(void *url_ptr)
{
    const char *url = (const char *)url_ptr;

    printf("Send_Request: %d", num_requests);
    for (int i = 0; i < num_requests; i++)
    {
        double response_time;
        if (found_G)
        {
            response_time = send_get_request(url);
            if (response_time < 0)
            {
                fprintf(stderr, "Error: Failed to send GET request\n");
                return NULL;
            }
            total_time += response_time;
        }
        else if (found_P)
        {
            response_time = send_post_request(url, send_body, "application/json");
        }
        else
        {
            fprintf(stderr, "Error: Neither -G nor -P option specified\n");
            return NULL;
        }
        
        printf("Request %d: Response time %.6f seconds\n", i + 1, response_time);
    }

    // average_time = total_time / num_requests;
    // printf("Average response time: %.6f seconds\n", average_time);

    pthread_exit(NULL);
}

// 发送Get请求到指定Url
double send_get_request(const char *url)
{
    CURL *curl;
    CURLcode res;
    struct curl_slist *headers = NULL;
    double time_spent;
    LARGE_INTEGER start, end; // windows下的时间函数

    // 初始化libcurl
    curl = curl_easy_init();
    if (!curl) // 这个判断是curl == NULL
    {
        fprintf(stderr, "Error: Failed to initialize libcurl\n");
        return -1;
    }
    
    // 设置请求Url
    curl_easy_setopt(curl, CURLOPT_URL, url);

    // 设置请求超时时间
    curl_easy_setopt(curl, CURLOPT_TIMEOUT, 10L);

    // 设置请求回调函数
    curl_easy_setopt(curl, CURLOPT_WRITEFUNCTION, write_call_back);

    // 设置请求头
    headers = curl_slist_append(headers, "User-Agent: Mozilla/5.0");
    curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

    // 记录开始时间
    QueryPerformanceCounter(&start);

    // 发送请求
    res = curl_easy_perform(curl);
    if (res != CURLE_OK)
    {
        fprintf(stderr, "Error: Failed to perform request: %s\n", curl_easy_strerror(res));
        return -1;
    }

    // 记录结束时间
    QueryPerformanceCounter(&end);

    // 计算响应时间
    time_spent = (double)(end.QuadPart - start.QuadPart) / 1000000.0;

    // 释放资源
    curl_easy_cleanup(curl);
    curl_slist_free_all(headers);

    return time_spent;
}

// 发送Post请求到指定url
double send_post_request(const char *url, const char *body, const char *content_type)
{
    CURL *curl;
    CURLcode res;
    struct curl_slist *headers = NULL;
    double response_time;
    LARGE_INTEGER start, end; // windows下的时间函数

    // 初始化libcurl
    curl = curl_easy_init();
    if (!curl) // 这个判断是curl == NULL
    {
        fprintf(stderr, "Error: Failed to initialize libcurl\n");
        return -1;
    }

    // 设置请求Url
    curl_easy_setopt(curl, CURLOPT_URL, url);

    // 设置Post请求
    curl_easy_setopt(curl, CURLOPT_POSTFIELDS, body);

    // 设置请求头 Content-Type
    headers = curl_slist_append(headers, content_type);
    curl_easy_setopt(curl, CURLOPT_HTTPHEADER, headers);

    // 发送请求
    res = curl_easy_perform(curl);
    if (res != CURLE_OK)
    {
        fprintf(stderr, "Error: Failed to send POST request: %s\n", curl_easy_strerror(res));
    }
    else
    {
        // 获取响应时间
        double total_time;
        curl_easy_getinfo(curl, CURLINFO_TOTAL_TIME, &total_time);
        response_time = total_time;
    }
    
    // 清理资源
    curl_slist_free_all(headers);
    curl_easy_cleanup(curl);

    return response_time;
}

// 判断文件是否为.json文件
const char *get_json_file(const char *file_name)
{
    const char *json_file = NULL;

    // 获取文件后缀名
    const char *dot = strrchr(file_name, '.');
    if (!dot || dot == file_name)
        // 文件没有后缀
        return NULL;
    
    // 比较后缀是否为.json
    if (strcmp(dot, ".json") == 0)
    {
        // 后缀名为.json -> 打开流
        body_file = fopen(file_name, "r");
        if (body_file)
        {
            fseek(body_file, 0, SEEK_END);
            long body_file_size = ftell(body_file);
            fseek(body_file, 0, SEEK_SET);

            // 检查文件是否为空
            if (body_file_size > 0)
            {
                // 分配内存拷贝一份
                char *json_content = malloc(body_file_size + 1);
                if (json_content)
                {
                    fread(json_content, 1, body_file_size, body_file);
                    // 添加结束符
                    json_content[body_file_size] = '\0';
                    json_file = json_content;
                }
                else
                {
                     fprintf(stderr, "Error: Failed to allocate memory for JSON content\n");
                }
            }
            else
            {
                fprintf(stderr, "Error: JSON file is empty: %s\n", file_name);
            }
            
            // 关闭流
            fclose(body_file);

            return json_file;
        }
        else
        {
            fprintf(stderr, "Error: Failed to open JSON file: %s\n", file_name);
        }
    }
    else
    {
        fprintf(stderr, "Error: %s is not a JSON file\n", file_name);
        exit(1);
    }
        
    
    // 后缀名不是.json
    return NULL;
}

// 回调函数.接收请求的返回数据
size_t write_call_back(void *ptr, size_t size, size_t nmemb, void *stream)
{
    // 处理返回数据
    return size * nmemb;
}