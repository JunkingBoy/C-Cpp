/**
 * @Author: Lucifer
 * @Date: 5/10/2023, 11:43:59 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/10/2023, 11:43:59 PM
 * Description: 对指针进行组合运算,观察指针指向的变化
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
int data[2] = {100, 200};
int moredata[2] = {300, 400}; // 时刻注意这样声明出来的是指向数组头元素的指针

int main(void)
{
    int * p1, *p2, *p3;

    p1 = p2 = data; // 因为data只是指向数组头元素的指针,所以可以这样赋值
    p3 = moredata;
    
    printf("p1: %d, p2: %d, p3: %d.\n", *p1, *p2, *p3); // p3内含有两个int类型元素,每个4字节
    printf("*p1++ = %d, *++p2 = %d, (*p3)++ = %d.\n", *p1++, *++p2, (*p3)++); // 先赋值在递增地址
    printf("*p1 = %d, *p2 = %d, *p3 = %d.\n", *p1, *p2, *p3); // 这里的p1是上面递增地址后的值,要时刻注意,上面地址的修改会影响下面的输出
    // 这里的p3还是原来的地址,但是地址上的值发生了变化

    getchar();

    return 0;
}