/**
 * @Author: Lucifer
 * @Date: 5/16/2023, 9:08:53 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/16/2023, 9:08:53 PM
 * Description: 数组和指针在字符串数组当中的声明和使用,注意区别
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
# define SLEN 40
# define LIM 5

int main(void)
{
    /** 指针声明 */
    const char * mytalents[LIM] = 
    {
        "Adding numbers swiftly",
        "Multiplying accurately",
        "Stashing data",
        "Following instructions to the letter",
        "Understanding the C language"
    };
    
    /** 数组声明 */
    char yourtalents[LIM][SLEN] =
    {
        "Walking in a straight line",
        "Sleeping",
        "Watching television",
        "Mailing letters",
        "Reading email"
    };
    int i;

    puts("Let's compare talents.");
    printf("%-36s %-25s.\n", "My Talents", "Your Talents");
    for ( i = 0; i < LIM; i++)
        printf("for my: %-36s for your: %-25s.\n", mytalents[i], yourtalents[i]);
    printf("\nsizeof mytalents: %zd, sizeof yourtalents: %zd.\n", sizeof(mytalents), sizeof(yourtalents));
    
    getchar();

    return 0;
}