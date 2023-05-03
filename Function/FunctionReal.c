/**
 * @Author: Lucifer
 * @Date: 5/3/2023, 4:14:40 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/3/2023, 4:14:40 PM
 * Description: 函数原型的使用
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
int imax(int a, int b); // 不可以在声明中既是函数定义也是函数原型,会导致重定义错误

int main(void)
{
    int n, m, z;
    printf("输入两个数(或按q退出):\n");
    while (scanf("%d %d", &n, &m) == 2)
    {
        z = imax(n, m);
        printf("%d 和 %d 中更大的是 %d.\n", n, m, z);
        printf("输入两个数(或按q退出):\n");
    }
    printf("结束");

    return 0;
}

int imax(int a, int b)
{
    return a > b ? a : b;
}