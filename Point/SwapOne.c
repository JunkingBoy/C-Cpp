/**
 * @Author: Lucifer
 * @Date: 5/5/2023, 12:19:33 AM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/5/2023, 12:19:33 AM
 * Description: 单值返回的应用
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
int interchage(int u, int v);

int main(void)
{
    int x = 5, y = 10;

    printf("交换前: x = %d, y = %d. \n", x, y);
    x = interchage(x, y);
    printf("交换后: x = %d, y = %d. \n", x, y);

    getchar();

    return 0;
}

/** 这段代码当中只返回了x的值,并没有后返回交换以后的y值.需要实现多值返回需要使用指针 */
int interchage(int u, int v)
{
    int temp;

    temp = u;
    u = v;
    v = temp;

    return u;
}