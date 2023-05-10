/**
 * @Author: Lucifer
 * @Date: 5/10/2023, 11:17:45 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/10/2023, 11:17:45 PM
 * Description: 使用双指针进行数组求和 -> 这里面要注意声明出的数组的类型
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
# define SIZE 10
int SumpByDP(int * start, int * endl);

int main(void)
{
    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20}; // 注意marbles声明出来并不是int类型,而是*int指针类型 -> 声明一个指针,该指针占用10个int类型元素大小的字节
    long answer;

    answer = SumpByDP(marbles, marbles + SIZE);
    printf("总和是: %ld.\n", answer);

    getchar();

    return 0;
}

int SumpByDP(int * start, int * endl)
{
    int total = 0;
    
    while (start < endl)
    {
        total += *start;
        start++;
    }

    return total;
}