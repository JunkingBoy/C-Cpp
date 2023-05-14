/**
 * @Author: Lucifer
 * @Date: 5/14/2023, 9:34:56 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/14/2023, 9:34:56 PM
 * Description: 使用定长求二维数组的行和列之和,注意声明一级指针的方式
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
# define ROWS 3
# define COLS 4
// typedef int arr4[3];
// typedef arr4 arr3x4[3];
int sum_rows(int ar[][COLS], int rows);
int sum_cols(int ar[][COLS], int rows);
int sum_cols_a(int (* p)[COLS], int rows);

int main(void)
{
    int test[ROWS][COLS] = 
    {
        {2, 4, 6, 8},
        {3, 5, 7, 9},
        {12, 10, 8, 6}
    };

    int sumByRow = sum_rows(test, ROWS);
    int sumByCol = sum_cols(test, ROWS);
    int sumByColP = sum_cols_a(test, ROWS);

    if (sumByCol == sumByColP)
        printf("方法无误!.\n");

    printf("行之和: %d.\n", sumByRow);
    printf("列之和: %d.\n", sumByCol);
    printf("列之和2: %d.\n", sumByColP);

    getchar();

    return 0;
}

int sum_rows(int ar[][COLS], int rows)
{
    int r;
    int c;
    int total;

    for (r = 0; r < rows; r++)
    {
        total = 0;
        for (c = 0; c < COLS; c++)
            total += ar[r][c];
        printf("行 %d 的和是 %d.\n", r + 1, total);
    }

    return total;
}

int sum_cols(int ar[][COLS], int rows)
{
    int r;
    int c;
    int total;

    for (c = 0; c < COLS; c++) // 修改外层,根据列数求和,列就成了外层
    {
        // 注意初始化total的值,否则将是一个错误的值
        total = 0;
        for (r = 0; r < rows; r++)
            total += ar[r][c];
        printf("列 %d 的和是 %d.\n", c + 1, total);
    }
    
    return total;
}

int sum_cols_a(int (* p)[COLS], int rows)
{
    /**
     * 注意:int (* p)[COLS]指针其实就是二维数组本身,
     * 并不是二维数组的解引用,
     * 二维数组的解引用是指向一维数组的头元素的指针
    */
    // int * tempP = (* p)[COLS]; // 这个初始化会导致指针指向未知的地址,这个初始化的方式也是有误的
    int r;
    int c;
    int total;

    for (c = 0; c < COLS; c++)
    {
        total = 0;
        for (r = 0; r < rows; r++)
        {
            // 应该在这里初始化指针
            int * tempP = &p[r][c]; // p是一个二维数组,也是一个指向数组的指针 -> 第一个形参的参数名是p
            total += *tempP; // 对指针解引用得值
            tempP++;
        }
    }

    return total;
}