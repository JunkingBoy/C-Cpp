/**
 * @Author: Lucifer
 * @Date: 4/27/2023, 9:58:27 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 4/27/2023, 9:58:27 PM
 * Description: 双重类型控制循环--->1,2的结合
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>

int main(void)
{
    const int n = 6;
    char temp = 'F';
    int k;

    for (int i = 1; i <= n; i++)
    {
        for (char j = temp, k = 1; j >= 'A', k < i + 1; j--, k++)
        /**
         * 使用,和组合条件控制循环
         * 循环次数根据int类型的数进行判断,如果没有int类型的数会把char类型转为int类型进行循环
        */
        {
            printf("%c", j);
        }
        printf("\n");
    }

    getchar();

    return 0;
}