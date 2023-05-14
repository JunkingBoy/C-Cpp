/**
 * @Author: Lucifer
 * @Date: 5/14/2023, 9:03:11 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/14/2023, 9:03:11 PM
 * Description: 指针之间的赋值兼容
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>

int main(void)
{
    int n = 5;
    double x;
    int * p;
    double * p2;
    int ** p3; // 指向指针的指针
    double ** p4;

    p = &n;
    p2 = &x;
    p3 = &p;
    p4 = &p2;
    p3 = p4; // 不被允许,因为指向的指针虽然同是地址类型,但是他们指向的值的类型不相同

    x = n; // 可以隐式类型转换
    p = p2; // 不被允许,编译时错误

    return 0;
}