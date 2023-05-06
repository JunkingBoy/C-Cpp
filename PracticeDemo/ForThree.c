/**
 * @Author: Lucifer
 * @Date: 4/27/2023, 10:13:43 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 4/27/2023, 10:13:43 PM
 * Description: 记录每一个末尾值
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>

int main(void)
{
    const int n = 6;
    char temp = 'V';
    char end = 'A';
    int k;

    for (int i = 0; i < n; i++)
    {
        for (char j = end, k = 0; j < temp, k < i + 1; j++, k++) // 不需要记录末尾值,直接让字符递增即可
        {
            printf("%c", j);
            end = j + 1;
        }
        printf("\n");
    }

    getchar();

    return 0;
}