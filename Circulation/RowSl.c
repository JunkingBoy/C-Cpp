/**
 * @Author: Lucifer
 * @Date: 4/17/2023, 11:02:58 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 4/17/2023, 11:02:58 PM
 * Description: c之嵌套循环
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
# define ROWS 6
# define CHARS 10

int main(void)
{
    int row;
    char ch;

    // 嵌套循环
    for (row = 0; row < ROWS; row++) // 外循环,执行五次
    {
        for (ch = 'A'; ch < ('A' + CHARS); ch++) // 内循环,执行10次,打印字符
        {
            printf("%c", ch);
        }
        printf("\n");
    }

    getchar();

    return 0;
}