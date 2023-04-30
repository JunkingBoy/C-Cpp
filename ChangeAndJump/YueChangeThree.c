/**
 * @Author: Lucifer
 * @Date: 4/30/2023, 11:39:27 AM
 * @LastEditors: Lucifer
 * @LastEditTime: 4/30/2023, 11:39:27 AM
 * Description: 约束算法优化2
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>

int main(void)
{
    int num;
    int div;

    printf("请输入一个数:\n");
    scanf("%d", &num);

    for ( div = 2; (div * div) <= num; div++)
    {
        if (num % div == 0)
        {
            if (div * div != num)
                printf("%d 是 %d 和 %d 的积.\n", num, div, num / div);
            else
                printf("%d 是 %d 的完全平方数.\n", num, div);
        }
        else
            printf("%d 不是 2 的约数\n", num);
    }
    
    getchar();
    
    getchar();

    return 0;
}