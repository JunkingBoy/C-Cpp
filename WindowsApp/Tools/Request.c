#include "Request.h"

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

// 回调函数.接收请求的返回数据
size_t write_call_back(void *ptr, size_t size, size_t nmemb, void *stream)
{
    // 处理返回数据
    return size * nmemb;
}