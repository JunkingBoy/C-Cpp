/**
 * @Author: Lucifer
 * @Date: 4/30/2023, 4:14:23 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 4/30/2023, 4:14:23 PM
 * Description: switch在循环当中的时候,单标签形式 ---> 注意break跳出了以后是跳出switch本次扫描,不是跳出外层循环
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
# include<ctype.h>

int main(void)
{
    char ch;

    printf("Give me a letter of the alphabet, and I will give ");
    printf("an animal name\n beginning with that letter.\n");
    printf("Please type in a letter; type # to end my act. \n");
    while ((ch = getchar()) != '#')
    {
        if ('\n' == ch) // 尤达表达式
            continue;
        if (islower(ch))
            switch (ch)
            {
            case 'a':
                printf("A \n");
                break;
            case 'b':
                printf("B \n");
                break;
            case 'c':
                printf("C \n");
                break;
            case 'd':
                printf("D \n");
                break;
            case 'e':
                printf("E \n");
                break;
            case 'f':
                printf("F \n");
                break;
            default:
                printf("结束!");
            }
            else
                printf("I recognize only lowercase letters.\n");
            while (getchar() != '\n')
                continue; // 跳过输入行剩余部分
            printf("Please type another letter or a #.\n"); // 循环结束
    }
    printf("Bye!\n");

    getchar();

    return 0;
}