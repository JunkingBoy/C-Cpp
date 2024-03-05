/*
 * @Author: Lucifer
 * @Data: Do not edit
 * @LastEditors: Lucifer
 * @LastEditTime: 2024-03-03 15:54:32
 * @Description: 
 */
#include <stdio.h>

int main(int argc, char *argv [])
{
    // 参数计数
    int count;

    printf("The command line has %d arguments:\n", argc - 1);
    for (count = 1; count < argc; count++)
        printf("%d: %s\n", count, argv[count]);
    printf("\n");

    getchar();

    return 0;
}