/**
 * @Author: Lucifer
 * @Date: 5/1/2023, 11:28:24 AM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/1/2023, 11:28:24 AM
 * Description: 使用EOF定义文件末尾
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>

int main(void)
{
    int ch;
    
    while ((ch = getchar()) != EOF)
        putchar(ch);
    
    return 0;
}   