/**
 * @Author: Lucifer
 * @Date: 5/5/2023, 12:28:15 AM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/5/2023, 12:28:15 AM
 * Description: 使用指针实现值的交换 -> 并非返回两个值
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
void interchange(int * u, int * v);

int main(void)
{
    int x = 5, y = 10;

    printf("交换前: x = %d, y = %d.\n", x, y);
    interchange(&x, &y); // 传地址->指针变量存储的是地址
    printf("交换后: x = %d, y = %d.\n", x, y);

    getchar();

    return 0;
}

void interchange(int * u, int * v)
{
    int temp;

    temp = *u;
    *u = *v;
    *v = temp;
}