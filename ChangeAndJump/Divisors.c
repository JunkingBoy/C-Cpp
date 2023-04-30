/**
 * @Author: Lucifer
 * @Date: 4/30/2023, 12:08:21 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 4/30/2023, 12:08:21 PM
 * Description: 素数约数算法
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
# include<stdbool.h>

int main(void)
{
    unsigned long num; // 待测的数
    unsigned long div; // 可能的约数
    bool isPrime; // 素数标记

    printf("输入一个整数来分析:\n");
    printf("输入q或者quit退出\n");
    while (scanf("%lu", &num) == 1)
    {
        for (div = 2, isPrime = true; (div * div) <= num; div++)
        {
            if (num % div == 0)
            {
                if ((div * div) != num) // 非完全平方数
                    printf("%lu 是 %lu 和 %lu 的约数.\n", num, div, num / div);
                else
                    printf("%lu 是 %lu 的完全平方数.\n", num, div);
                isPrime = false;
            }
            else
            {
                printf("该数不是2的约数.\n");
                break;
            }
            if (isPrime)
                printf("%lu 是素数.\n", num);
            printf("请输入另一个整数来分析:\n");
            printf("输入q或者quit退出\n");
        }
        printf("退出!");
    }
    getchar();

    return 0;
}