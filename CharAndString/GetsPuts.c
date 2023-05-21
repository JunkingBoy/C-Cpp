/**
 * @Author: Lucifer
 * @Date: 5/21/2023, 7:34:03 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/21/2023, 7:34:03 PM
 * Description: 正行读取字符串函数 - gets() puts()
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
# define STLEN 81

int main(void)
{
    char words[STLEN];

    puts("输入一串字符串:");
    gets(words);
    printf("你输入的字符串是:");
    printf("- print %s.\n", words);
    puts(words);
    puts("Done.");

    getchar();

    return 0;
}