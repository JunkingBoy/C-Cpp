/**
 * @Author: Lucifer
 * @Date: 4/27/2023, 9:36:01 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 4/27/2023, 9:36:01 PM
 * Description: 单类型控制循环
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>

int main(void)
{
    const int n = 5;

    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            printf("$");
        }
        printf("\n");
    }

    getchar();

    return 0;
}