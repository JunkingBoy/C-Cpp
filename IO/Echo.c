/**
 * @Author: Lucifer
 * @Date: 5/1/2023, 10:48:15 AM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/1/2023, 10:48:15 AM
 * Description: echo函数的模拟,结束标志是#
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>

int main(void)
{
    char ch;

    while ((ch = getchar()) != '#') // #为结束条件,但是应该用一个文本中用不到的字符来标记输入完成
        putchar(ch);
    
    return 0;
    
}