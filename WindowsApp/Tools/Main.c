/*
 * @Author: Lucifer
 * @Data: Do not edit
 * @LastEditors: Lucifer
 * @LastEditTime: 2024-03-14 00:01:37
 * @Description: 
 */
#include "Util.h"

int main(int argc, char *argv [])
{
    // 解析命令行
    process_arguments(argc, argv);

    // 最少参数数量
    if (argc < 4)
    {
        print_usage();

        getchar();

        return 1;
    }

    /**
     * 并发发送请求
    */
    // 创建多个线程
    pthread_t threads[NUM_CONCURRENT];
    for (int i = 0; i < NUM_CONCURRENT; i++)
    {
        if (pthread_create(&threads[i], NULL, send_requests_thread, (void *)URL) != 0) {
            fprintf(stderr, "Error: Failed to create thread\n");
            return 1;
        }
    }

    // 等待所有线程结束
    for (int i = 0; i < NUM_CONCURRENT; i++)
    {
        pthread_join(threads[i], NULL);
    }

    getchar();

    return 0;
}