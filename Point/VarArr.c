/**
 * @Author: Lucifer
 * @Date: 5/14/2023, 10:44:17 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/14/2023, 10:44:17 PM
 * Description: c99当中对VLA的使用
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
# define ROWS 3
# define COLS 4
// int sumVar(int rows, int cols, int ar[rows][cols]); // 注意,形参的顺序不可以更改,因为第三个参数使用的是前两个参数

int main(void)
{
    int i, j;
    int rows = 3;
    int cols = 4;

    int vArr[rows][cols];

    for ( i = 0; i < rows; i++)
        for ( j = 0; j < cols; j++)
            vArr[i][j] = i * j + j;

    printf("3 * 10 VAL.\n");
    // printf("求和数组内元素结果得 %d.\n", sumVar(rows, cols, vArr));

    return 0;
}

// int sumVar(int rows, int cols, int ar[rows][cols])
// {
//     int r;
//     int c;
//     int total = 0;

//     for ( r = 0; r < rows; r++)
//         for ( c = 0; c < cols; c++)
//             total += ar[r][c];
    
//     return total;
// }