/**
 * @Author: Lucifer
 * @Date: 5/14/2023, 11:37:54 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/14/2023, 11:37:54 PM
 * Description: 练习示例程序
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
# define ROWS 3
# define COLS 5
// double (* Storage(int rows))[COLS]; // 注意该函数的声明
void Storage(double ar[ROWS][COLS]);
double Ave(double ar[]);
double AllAve(double (* p)[COLS]);
double Max(double (* p)[COLS]);
void Print(double ar[][COLS]);

int main(void)
{
    int index;

    double test[ROWS][COLS];
    double tempTest[ROWS][COLS] = 
    {
        {1, 2, 3, 4, 5},
        {2, 3, 7, 5, 6},
        {3, 4, 5, 6, 4}
    };

    Storage(test);
    Print(test);
    printf("输入想要查看第几组的平均数:.\n");
    if (scanf("%d", &index) == 1 && index <= 3)
    {
        printf("第 %d 组的平均数: %lf.\n", index, Ave(test[index]));
    }
    printf("全部的平均数: %lf.\n", AllAve(test));
    printf("最大值: %lf.\n", Max(test));

    getchar();

    return 0;
}

void Storage(double ar[ROWS][COLS])
{
    int r;
    int c;
    int ele;

    for (r = 0; r < ROWS; r++)
    {
        printf("输入第 %d 组数据,每组5个数.\n", r + 1);
        for ( c = 0; c < COLS; c++)
        {
            if (scanf("%d", &ele) == 1)
                ar[r][c] = ele;
        }
    }
}

double Ave(double ar[])
{
    int i;
    double total = 0;

    for ( i = 0; i < COLS; i++)
        total += ar[i];

    return total / COLS;
}

double AllAve(double (* p)[COLS])
{
    int r;
    int c;
    double * tempP;
    double total;

    for (r = 0; r < ROWS; r++)
    {
        for (c = 0; c < COLS; c++)
        {
            tempP = &p[r][c];
            total += *tempP;
        }
    }
    
    return total / (ROWS * COLS);
}

double Max(double (* p)[COLS])
{
    double * MacValue; // 记录最大值指针
    double * tempP;
    int r;
    int c;
    
    MacValue = &p[0][0];
    for ( r = 0; r < ROWS; r++)
    {
        for ( c = 0; c < COLS; c++)
        {
            tempP = &p[r][c];
            if (*tempP > *MacValue)
                MacValue = tempP;
        }
    }
    
    return *MacValue;
}

void Print(double ar[][COLS])
{
    int r;
    int c;
    double * p;

    for (r = 0; r < ROWS; r++)
    {
        for (c = 0; c < COLS; c++)
        {
            p = &ar[r][c];
            printf("第 %d 组数据的五个值是: %lf.\n", r + 1, *p); // 注意浮点数值的占位符
        }
    }
}