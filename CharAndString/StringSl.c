/**
 * @Author: Lucifer
 * @Date: 5/15/2023, 9:27:24 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/15/2023, 9:27:24 PM
 * Description: 字符串的使用,字符串本质的运用
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
# define MSG "I am a symbolic string constant."
# define MAXLENGTH 81

int main(void)
{
    char words[MAXLENGTH] = "I am a string in an array.";
    const char * p1 = "Something is pointing at me.";
    puts("Here are some strings:");
    puts(MSG);
    puts(words);
    puts(p1);
    words[8] = 'p';
    puts(words);

    getchar();

    return 0;
}