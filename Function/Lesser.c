/**
 * @Author: Lucifer
 * @Date: 5/3/2023, 4:07:12 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/3/2023, 4:07:12 PM
 * Description: 两数比较大小,返回更小的.使用return
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
int imin(int, int);

int main(void)
{
    int numberOne, numberTwo;

    printf("输入两个整数,或者按q退出: \n");
    while (scanf("%d %d", &numberOne, &numberTwo) == 2)
    {
        printf("%d 和 %d 当中更小的是 %d. \n", numberOne, numberTwo, imin(numberOne, numberTwo));
        printf("输入两个整数,或者按q退出: \n");
    }
    printf("结束!");

    return 0;
}
/** 比较两数大小,返回最小的 */
int imin(int n, int m)
{
    int min;

    if (n < m)
        min = n;
    else
        min = m;

    return min;
}