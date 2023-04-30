/**
 * @Author: Lucifer
 * @Date: 4/30/2023, 3:09:02 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 4/30/2023, 3:09:02 PM
 * Description: for循环当中的continue使用
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>

int main(void)
{
    int count;
    char ch;

    for (count = 0; count < 10; count++)
    {
        ch = getchar();
        if (ch == '\n')
            continue;
        putchar(ch);
    }

    getchar();

    return 0;
}