/**
 * @Author: Lucifer
 * @Date: 5/10/2023, 11:04:40 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/10/2023, 11:04:40 PM
 * Description: 使用指针求和计算字节大小
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
# define SIZE 10
int sum(int ar[], int n);

int main(void)
{
    int marbles[SIZE] = {20, 10, 5, 39, 4, 16, 19, 26, 31, 20}; // marbles内包含10个int类型的数值,每个int类型4字节,所以marbles是40字节大小
    long answer;

    answer = sum(marbles, SIZE);
    printf("结果总和: %ld.\n", answer);
    printf("marbles的字节大小是 %zd 字节.\n", sizeof(marbles));

    getchar();

    return 0;
}

int sum(int ar[], int n)
{
    int i;
    int total = 0;

    for ( i = 0; i < n; i++)
        total += ar[i];

    printf("该数组占 %zd 字节.\n", sizeof(ar)); // ar并不是数组本身,只是一个指向数组首元素的地址,系统中用8字节存储地址,所以是8字节
    
    return total;
}