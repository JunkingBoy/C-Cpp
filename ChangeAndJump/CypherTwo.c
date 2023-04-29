/**
 * @Author: Lucifer
 * @Date: 4/29/2023, 11:07:43 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 4/29/2023, 11:07:43 PM
 * Description: ctype.h宏文件函数用法
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
# include<ctype.h>

int main(void)
{
    char ch;

    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
            putchar(ch + 1);
        else
            putchar(ch);
    }
    
    putchar(ch);

    getchar();

    return 0;
}