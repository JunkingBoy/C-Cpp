/**
 * @Author: Lucifer
 * @Date: 5/6/2023, 2:48:21 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/6/2023, 2:48:21 PM
 * Description: 练习,两数当中找较小的数
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
int min(double, double);

int main(void)
{
    int numOne, numTwo;

    printf("输入两个数比较大小,q退出:\n");
    while (scanf("%d %d", &numOne, &numTwo) == 2)
    {
        int minNum = min(numOne, numTwo);
        printf("两数当中较小的是: %d.\n", minNum);
        printf("输入两个数比较大小,q退出:\n");
    }

    getchar();

    return 0;
}

int min(double a, double b)
{
    if (a == b)
        return a;
    return a > b ? b : a;
}