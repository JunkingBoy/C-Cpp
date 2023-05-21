/**
 * @Author: Lucifer
 * @Date: 5/21/2023, 7:59:47 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/21/2023, 7:59:47 PM
 * Description: fgets()函数初体验,关注fgets()函数存储的特性
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
# define STELN 14

int main(void)
{
    char words[STELN];

    puts("请输入一个字符串:");
    fgets(words, STELN, stdin);
    printf("字符串 (puts(), then fputs()):");
    puts(words); // 第一行输入比fgets()读入的整行输入短,所以apple pie\n\0被存储在数组中
    fputs(words, stdout);
    puts("输入字符串:");
    fgets(words, STELN, stdin);
    printf("字符串 (puts(), then fputs()):");
    puts(words);
    fputs(words, stdout);
    puts("Done.\n");

    getchar();

    return 0;
}