/**
 * @Author: Lucifer
 * @Date: 5/3/2023, 5:33:11 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/3/2023, 5:33:11 PM
 * Description: 进制转换问题,主要是解决十进制转二进制
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
void to_binary(unsigned long);

int main(void)
{
    unsigned long number;
    
    printf("输入一个正整数,q退出!.\n");
    while (scanf("%lu", &number) == 1)
    {
        printf("该数的二进制数是:\n");
        to_binary(number);
        putchar('\n');
        printf("输入一个正整数,q退出!.\n");
    }

    printf("Done!");

    return 0;
}

// 递归
void to_binary(unsigned long n)
{
    int r;

    r = n % 2; // 记录余数
    if (n >= 2) 
        to_binary(n / 2);
    putchar(r == 0 ? '0': '1');

    return;
}