/**
 * @Author: Lucifer
 * @Date: 4/27/2023, 8:56:39 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 4/27/2023, 8:56:39 PM
 * Description: 带返回值函数示例
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
double power(double n, int p); // ANSI函数原型 ---> 前置定义,提前告知编译器该函数的返回值信息

int main(void)
{
    double x, xpow;
    int exp;

    printf("Enter a number and the positive integer power");
    printf(" to which\n the number will be raised. Enter q");
    printf(" to quit.\n");

    while (scanf("%lf%d", &x, &exp) == 2)
    {
        xpow = power(x, exp);
        printf("%.3g to the power %d is %.5g\n", x, exp, xpow);
        printf("退出.\n");
    }

    return 0;
}

double power(double n, int p)
{
    double pow;
    int i;
    for ( i = 0; i <= p; i++)
    {
        pow *= n;
    }

    return pow;
}