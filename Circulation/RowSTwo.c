/**
 * @Author: Lucifer
 * @Date: 4/17/2023, 11:06:44 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 4/17/2023, 11:06:44 PM
 * Description: 嵌套训话之外层循环控制内层循环
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>

int main(void)
{
    const int ROWS = 6;
    const int CHARS = 6;
    int row;
    char ch;

    for (row = 0; row < ROWS; row++)
    {
        for (ch = ('A' + row); ch < ('A' + CHARS); ch++)
        {
            printf("%c", ch);
        }
        printf("\n");
    }

    getchar();
    
    return 0;
}