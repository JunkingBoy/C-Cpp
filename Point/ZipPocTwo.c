/**
 * @Author: Lucifer
 * @Date: 5/13/2023, 1:08:30 AM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/13/2023, 1:08:30 AM
 * Description: 指向多维数组的指针的声明
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>

int main(void)
{
    int zip[4][2] = 
    {
        {2, 4},
        {6, 8},
        {1, 3},
        {5, 7}
    };
    int (* pz)[2]; // 这是一个指针变量,指向一个内含两个int类型值的数组 -> 指向的是该数组的头指针
    // int * pax[2]; -> 这个声明的是pax是一个数组,里面包含的是两个指针元素,指向int类型的元素的指针
    /**
     * 之所以要用圆括号是因为
     * []运算符优先级要比*要高
    */

    pz = zip;

    printf("pz = %p, pz + 1 = %p.\n", pz, pz + 1); // 相当于外层指针
    printf("pz[0] = %p, pz[0] + 1 = %p.\n", pz[0], pz[0] + 1); // 相当于内层指针
    printf(" *pz = %p, *pz + 1 = %p.\n", *pz, *pz + 1); // 第一个解引用解出来的值也是一个地址,指向内层数组的头指针 -> 和上一个打印结果一致
    printf("pz[0][0] = %d.\n", pz[0][0]);
    printf("  *pz[0] = %d.\n", *pz[0]);
    printf("   **pz = %d.\n", **pz);
    printf("    *(*(pz + 2) + 1) = %d.\n", *(*(pz + 2) + 1)); // 3 -> 通过运算符一层一层去找即可

    getchar();

    return 0;
}