/**
 * @Author: Lucifer
 * @Date: 5/21/2023, 8:12:06 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/21/2023, 8:12:06 PM
 * Description: fgets()函数的使用
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
# define STELN 10

int main(void)
{
    char words[STELN];

    puts("输入字符串(q退出):");
    while (fgets(words, STELN, stdin) != NULL && words[0] != '\n')
        fputs(words, stdout);
    puts("Done.");

    getchar();

    return 0;
}