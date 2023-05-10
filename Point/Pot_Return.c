/**
 * @Author: Lucifer
 * @Date: 5/10/2023, 10:56:18 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/10/2023, 10:56:18 PM
 * Description: 使用指针和数组分别进行求和计算
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
# include<stdbool.h> // 引用bool
# define MONTHS 12
int SumByPot(int * p, int);
int SumByArr(int [], int);

int main(void)
{
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int totalByPot;
    int totalByArr;

    totalByPot = SumByPot(days, 10);
    totalByArr = SumByArr(days, 10);

    if (totalByPot == totalByArr)
        printf("%d", true);
    else
        printf("pot: %d, arr: %d.\n", totalByPot, totalByArr);

    getchar();

    return 0;
}

int SumByPot(int * pi, int n)
{
    int i;
    int total = 0;

    for (i = 0; i < n; i++)
        total += *(pi + i);

    return total;
}

int SumByArr(int ar[], int n)
{
    int i;
    int total = 0;

    for (i = 0; i < n; i++)
        total += ar[i];
    
    return total;
}