#include "Util.h"
#include "Request.h"

/**
 * 定义全局变量
*/
int NUM_REQUESTS = 1;
int NUM_CONCURRENT = 1;
const char *SEND_BODY = NULL;
const char *URL = NULL;
FILE *BODY_FILE = NULL;
int FOUND_G = 0;
int FOUND_P = 0;
int FOUND_B = 0;

// 封装发送请求
void *send_requests_thread(void *url_ptr)
{
    const char *URL = (const char *)url_ptr;

    for (int i = 0; i < NUM_REQUESTS; i++)
    {
        double response_time;
        if (FOUND_G)
        {
            response_time = send_get_request(URL);
            if (response_time < 0)
            {
                fprintf(stderr, "Error: Failed to send GET request\n");
                return NULL;
            }
        }
        else if (FOUND_P)
        {
            if (SEND_BODY == NULL)
            {
                fprintf(stderr, "ERROR: None Body File\n");
                exit(EXIT_SUCCESS);
            }
            response_time = send_post_request(URL, SEND_BODY, "application/json");
        }
        else
        {
            fprintf(stderr, "Error: Neither -G nor -P option specified\n");
            return NULL;
        }
        
        printf("Request %d: Response time %.6f seconds\n", i + 1, response_time);
    }

    pthread_exit(NULL);
}

// 程序用法
void print_usage()
{
    printf("Usage: program.exe  [-H <help>] -R <URL> [-G | -P [-B <BODY_FILE>]] [-C <concurrency>] [-T <num_requests>]\n");
    printf("Options:\n");
    printf("  -H                   How to use tool\n");
    printf("  -R <URL>             Specify the URL to send requests to\n");
    printf("  -G                   Send GET requests\n");
    printf("  -P                   Send POST requests\n");
    printf("  -B <BODY_FILE>       Specify the body file to send in the request (must be a JSON file)\n");
    printf("  -C <concurrency>     Specify the concurrency level (default: 1)\n");
    printf("  -T <num_requests>    Specify the number of requests to send (default: 1)\n");
}

void process_arguments(int argc, char *argv[])
{
    struct option long_options[] =
    {
        {"help", no_argument, NULL, 'h'},
        {"url", required_argument, NULL, 'r'},
        {"get", no_argument, NULL, 'g'},
        {"post", no_argument, NULL, 'p'},
        {"body", required_argument, NULL, 'b'},
        {"concurrent", required_argument, NULL, 'c'},
        {"time", required_argument, NULL, 't'},
        {NULL, 0, NULL, 0}
    };
    
    int opt;
    int option_index = 0;
    while ((opt = getopt_long(argc, argv, "hgpr:b:c:t:", long_options, &option_index)) != -1)
    {
        switch (opt)
        {
        case 'h':
            print_usage();
            exit(EXIT_SUCCESS);
        case 'r':
            URL = optarg;
            break;
        case 'g':
            FOUND_G = 1;
            break;
        case 'p':
            FOUND_P = 1;
            break;
        case 'b':
            if (!FOUND_P)
            {
                fprintf(stderr, "ERROR: First Missing argument -B after -P\n");
                exit(EXIT_FAILURE);
            }
            const char *file_name = optarg;
            SEND_BODY = get_json_file(file_name);
            // shift + tab向前缩进
            if (SEND_BODY == NULL)
            {
                fprintf(stderr, "ERROR: File is not a non-empty JSON file: %s\n", file_name);
                exit(EXIT_FAILURE);
            }
            break;
        case 'c':
            NUM_CONCURRENT = atoi(optarg);
            if (NUM_CONCURRENT <= 0)
            {
                fprintf(stderr, "ERROR: Invalid concurrency level\n");
                exit(EXIT_FAILURE);
            }
            break;
        case 't':
            NUM_REQUESTS = atoi(optarg);
            if (NUM_REQUESTS <= 0)
            {
                fprintf(stderr, "ERROR: Invalid number of requests\n");
                exit(EXIT_FAILURE);
            }
            break;
        default:
            exit(EXIT_FAILURE);
        }
    }

    if (!FOUND_G && !FOUND_P)
    {
        fprintf(stderr, "ERROR: Missing required argument -G or -P\n");
        exit(EXIT_FAILURE);
    }
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
        json_file = copy_file(file_name);
    }
    else
    {
        fprintf(stderr, "Error: %s is not a JSON file\n", file_name);
        exit(1);
    }
        
    
    // 后缀名不是.json
    return NULL;
}

const char *copy_file(const char *file_name)
{
    const char *target_json_file = NULL;

    // 后缀名为.json -> 打开流
    BODY_FILE = fopen(file_name, "r");
    if (BODY_FILE)
    {
        fseek(BODY_FILE, 0, SEEK_END);
        long BODY_FILE_SIZE = ftell(BODY_FILE);
        fseek(BODY_FILE, 0, SEEK_SET);

        // 检查文件是否为空
        if (BODY_FILE_SIZE > 0)
        {
            // 分配内存拷贝一份
            char *json_content = malloc(BODY_FILE_SIZE + 1);
            if (json_content)
            {
                fread(json_content, 1, BODY_FILE_SIZE, BODY_FILE);
                // 添加结束符
                json_content[BODY_FILE_SIZE] = '\0';
                target_json_file = json_content;
                return target_json_file;
            }
            else
            {
                fprintf(stderr, "Error: Failed to allocate memory for JSON content\n");
                exit(1);
            }
        }
    }
    else
    {
        fprintf(stderr, "Error: Failed to open JSON file: %s\n", file_name);
        exit(1);
    }
}