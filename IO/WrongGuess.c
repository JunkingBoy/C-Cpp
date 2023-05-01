/**
 * @Author: Lucifer
 * @Date: 5/1/2023, 12:35:52 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/1/2023, 12:35:52 PM
 * Description: 一个简单的递增猜数字程序,题目关键点在于练习字符io函数
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>

int main(void)
{
    int guess = 1;
    char response;

    printf("输入一个整数,在1到100之间.");
    printf("\n我猜他是: %d?", guess);
    while ((response = getchar()) != 'y')
    {
        if (response == 'n')
            printf("这个数是: %d?\n", ++guess);
        else
            printf("我只知道y或者n.\n");
        while (getchar() != '\n')
            continue; // 跳过剩余的输入行
    }
    
    return 0;
}