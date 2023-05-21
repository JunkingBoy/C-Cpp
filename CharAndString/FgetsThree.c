/**
 * @Author: Lucifer
 * @Date: 5/21/2023, 8:27:46 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/21/2023, 8:27:46 PM
 * Description: 处理fgets()函数保存的最后一行的换行符\n -> scanf()函数和fgets()函数的使用
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
# define STLEN 10
char * sgets(char * st, int n);

int main(void)
{
    char words[STLEN];
    int i;

    puts("请输入字符串(空行退出):");
    while (fgets(words, STLEN, stdin) != NULL && words[0] != '\n')
    {
        i = 0;
        while (words[0] != '\n' && words[i] != '\0')
            i++;
        if (words[i] == '\n')
            words[i] = '\0';
        else // word[i] == '\0' 执行这部分代码
            while (getchar() != '\n')
                continue;
        puts(words);
    }
    puts("Done.");

    return 0;
}

char * sgets(char * st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0') // 没遇到换行符,继续读取
            i++;
        if (st[i] == '\n')
            st[i] = '\0'; // 换行符用空字符替换
        else
            while (getchar() != '\n')
                continue;
    }
    
    return ret_val;
}
