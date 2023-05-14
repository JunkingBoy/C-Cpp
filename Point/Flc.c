/**
 * @Author: Lucifer
 * @Date: 5/14/2023, 10:49:36 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/14/2023, 10:49:36 PM
 * Description: 对复合字面量的声明和使用
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
# define COLS 4
int sumByA(const int ar[][COLS], int rows);
int sum(const int ar[], int n);

struct Person
{
    char * name;
    int age;
    char * address;
};

struct Person p = {
    .name = "Jun",
    .age = 23,
    .address = "Main"
};

/** 使用复合字面量声明可以变成 */
int main(void)
{
    struct Person p = (struct Person) {"Jun", 23, "Main"};

    int total1, total2, total3;
    int * p1;
    int (* p2)[COLS];
    // 声明复合字面量
    // p1 = (int[2]) {10, 20};
    // p2 = (int[2][COLS]) { {1, 2, 3, -9}, {4, 5, 6, -8}}; // 这个地址指向的临时数组对象在当前语句或表达式执行完毕后就会被销毁

    // total1 = sum(p1, 2);
    // total2 = sumByA(p2, 2);
    // total3 = sum((int[]) {4, 4, 4, 5, 5, 5}, 6);

    // printf("total1 %d.\n", total1);
    // printf("total2 %d.\n", total2);
    // printf("total3 %d.\n", total3);

    return 0;
}

int sumByA(const int ar[][COLS], int rows)
{
    int r;
    int c;
    int total = 0;

    for ( r = 0; r < rows; r++)
        for ( c = 0; c < COLS; c++)
            total += ar[r][c];
    
    return total;
}

int sum(const int ar[], int n)
{
    int i;
    int total = 0;
    
    for ( i = 0; i < n; i++)
        total += ar[i];

    return 0;
}