/**
 * @Author: Lucifer
 * @Date: 5/6/2023, 5:10:42 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/6/2023, 5:10:42 PM
 * Description: c99方式指定初始化数组元素
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
# define MONTHS 12

int main(void)
{
    int days[MONTHS] = {31, 28, [4] = 31}; // 注意数组越界问题,在指定初始化的时候 -> 部分编译器不支持c99方式去初始化数组元素
    int index;

    for (index = 0; index < MONTHS; index++)
        printf("%2d %d\n", index + 1, days[index]);
    
    getchar();

    return 0;
}