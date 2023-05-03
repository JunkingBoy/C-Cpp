/**
 * @Author: Lucifer
 * @Date: 5/3/2023, 5:00:01 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/3/2023, 5:00:01 PM
 * Description: 分别使用循环和递归计算阶乘(主要介绍尾递归)
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
long fact(int);
long rfact(int);

int main(void)
{
    int num;

    printf("这是一个计算阶乘的程序.\n");
    printf("输入0 - 12 内的整数, 按q退出.\n");
    while (scanf("%d", &num) == 1)
    {
        if (num < 0 || num > 12)
        {
            printf("重新输入!\n");
            continue;
        }
        else
        {
            printf("循环: %d 的阶乘是 %ld.\n", num, fact((long) num));
            printf("递归: %d 的阶乘是 %ld.\n", num, rfact((long) num));
        }
        printf("输入0 - 12 内的整数, 按q退出.\n");
    }

    printf("结束!");

    return 0;
}

long fact(int n)
{
    long ans;

    for (ans = 1; n > 1; n--)
        ans *= n;
    
    return ans;
}

long rfact(int n)
{
    long ans;

    if (n > 0)
        ans = n * rfact(n - 1);
    else
        ans = 1;

    return ans;
}