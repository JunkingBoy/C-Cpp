/**
 * @Author: Lucifer
 * @Date: 5/12/2023, 10:09:08 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/12/2023, 10:09:08 PM
 * Description: 四则运算计算指针的变化以及指针地址的变化
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>

int main(void)
{
    int urn[5] = { 100, 200, 300, 400, 500 };
    int * ptr1, * ptr2, * ptr3;

    /** 使用前两个指针记录第一第二个数 */
    ptr1 = urn;
    ptr2 = &urn[2]; // 因为是指针变量,存储地址,所以用取址符

    printf("指针的值, 地址指向的值, 指针地址.\n");
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p.\n", ptr1, *ptr1, &ptr1); // &ptr1是指向指针的指针

    // 指针加法
    ptr3 = ptr1 + 4;
    printf("指针的值, 地址指向的值, 指针地址.\n");
    printf("ptr1 + 4 = %p, *(ptr1 + 4) = %d.\n", ptr1 + 4, *(ptr1 + 4));
    ptr1++;
    
    printf("指针的值, 地址指向的值, 指针地址.\n");
    printf("ptr1 = %p, *ptr1 = %d, &ptr1 = %p.\n", ptr1, *ptr1, &ptr1); // 可以观察到指针ptr1指向的地址发生了变化,但是指向ptr1的指针的地址没有发生变化

    ptr2--;
    printf("指针的值, 地址指向的值, 指针地址.\n");
    printf("ptr2 = %p, *ptr2 = %d, &ptr2 = %p.\n", ptr2, *ptr2, &ptr2);

    --ptr1;
    ++ptr2;

    printf("重置以后指针的值:\n");
    printf("ptr1: %p, ptr2: %p.\n", ptr1, ptr2);

    // 观察指针之差
    printf("ptr1 - ptr2: %td.\n", ptr1 - ptr2);

    // 指针减去一个整数
    int * tempPtr = ptr3 - 2;
    printf("ptr3: %p, *ptr3 : %d ptr3 - 2 : %p, *tempPtr : %d.\n", ptr3, *ptr3, ptr3 - 2, *tempPtr);

    getchar();

    return 0;
}