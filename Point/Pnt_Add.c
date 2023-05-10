/**
 * @Author: Lucifer
 * @Date: 5/10/2023, 10:00:25 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/10/2023, 10:00:25 PM
 * Description: 指针在数组当中的使用
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
# define SIZE 4

int main(void)
{
    short dates[SIZE];
    short * pti; // 这是一个指针变量 -> 值是一个地址
    short index;
    double bills[SIZE];
    double * ptf;

    pti = dates;
    ptf = bills; // 由此可以看到,数组是一串连续的内存地址
    printf("%23s %15s\n", "Shoot", "double");
    for ( index = 0; index < SIZE; index++)
        printf("索引的指针是 + %d: %10p, %10p\n", index, pti + index, ptf + index); // 从第二行开始就是每一个数组索引的值的地址

    getchar();

    return 0;
}