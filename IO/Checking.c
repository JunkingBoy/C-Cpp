/**
 * @Author: Lucifer
 * @Date: 5/1/2023, 1:34:38 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/1/2023, 1:34:38 PM
 * Description: 求两数平方和,用了结构化--->分了几个函数,核心函数:sum_squares()函数
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
# include<stdbool.h>
long get_long(void); // 验证输入是一个整数
bool bad_limits(long begin, long end, long low, long high); // 验证范围的上下限是否有效
double sum_squares(long a, long b); // 计算a ~ b的整数平方和

int main(void)
{
    const long MIN = -10000000L; // 范围下限
    const long MAX = +10000000L; // 范围上限
    long start;
    long stop;
    double answer;

    printf("这个项目是求和和计算平方的\n");
    start = get_long();
    printf("upper limit:");
    stop = get_long();
    while (start != 0 || stop != 0)
    {
        if (bad_limits(start, stop, MIN, MAX))
            printf("重试!\n");
        else
        {
            answer = sum_squares(start, stop);
            printf("整数平方和\n");
            printf("%ld 和 %ld 的平方和是 %g", start, stop, answer);
        }
        printf("Enter the limits (enter 0 for both): \n");
        printf("lower limit:");
        start = get_long();
        stop = get_long();
    }

    printf("结束!");

    return 0;
}

long get_long(void)
{
    long intput;
    char ch;

    while (scanf("%ld", &intput) != 1)
    {
        while ((ch = getchar()) != 'n') // 结束条件
            putchar(ch);
        printf("不是整数.\n请输入一个整数");
        printf("整数的值,例如:25 -178 3:");
    }

    return intput;
}

bool bad_limits(long begin, long end, long low, long high)
{
    bool not_good = false;

    if (begin > end)
    {
        printf("%ld不小于%ld", begin, end);
        not_good = true;
    }
    if (begin < low || end < low)
    {
        printf("值必须大于:%ld.\n", low);
        not_good = true;
    }
    if (begin > high || end > high)
    {
        printf("值必须小于:%ld.\n", high);
        not_good = true;
    }

    return not_good;    
}

double sum_squares(long a, long b)
{
    double total = 0;
    long i;

    for (i = a; i < b; i++)
        total += (double) i * (double) i;
    
    return total;
}
