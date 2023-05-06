/**
 * @Author: Lucifer
 * @Date: 5/6/2023, 5:55:18 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/6/2023, 5:55:18 PM
 * Description: 二维数组的初始化以及使用
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
# define MONTHS 12
# define YEARS 5

int main(void)
{
    // 声明二维数组并初始化--->初始化方法:先初始化一维数组,在初始化二维数组
    const float rain[YEARS][MONTHS]= 
    {
        {4.3, 4.3, 4.3, 3.0, 3.0, 3.0, 2.5, 2.5, 2.5, 1.0, 1.0, 1.0},
        {3.0, 3.0, 3.0, 4.3, 4.3, 4.3, 1.0, 1.0, 1.0, 2.5, 2.5, 2.5},
        {2.5, 2.5, 2.5, 3.0, 3.0, 3.0, 4.3, 4.3, 4.3, 1.0, 1.0, 1.0},
        {1.0, 1.0, 1.0, 4.3, 4.3, 4.3, 3.0, 3.0, 3.0, 2.5, 2.5, 2.5},
        {4.3, 4.3, 4.3, 2.5, 2.5, 2.5, 1.0, 1.0, 1.0,3.0, 3.0, 3.0}
    };

    int year, month;
    float subtot, total;

    printf("YEARS    RAINFALL (inches)\n");
    for (year = 0, total = 0; year < YEARS; year++) // 每一年各月降水量总和
    {
        for (month = 0, subtot = 0; month < MONTHS; month++)
            subtot += rain[year][month];
        printf("%5d %15.1f\n", 2015 + year, subtot);
        total += subtot; // 5年总降水量
    }
    
    for (month = 0; month < MONTHS; month++) // 每个月五年的降水量总和
    {
        for (year = 0, subtot = 0; year < YEARS; year++)
            subtot += rain[year][month];
        printf("%4.1f", subtot / YEARS);
    }

    printf("\n");

    getchar();
    
    return 0;
}