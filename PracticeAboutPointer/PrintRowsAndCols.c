/**
 * @Author: Lucifer
 * @Date: 5/6/2023, 3:15:45 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/6/2023, 3:15:45 PM
 * Description: 循环打印需要的字符、行、列
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
void chline(char, int, int);

int main(void)
{
    int row, col;
    char ch;

    printf("输入想打印的字符以及打印多少行多少列,按q退出:\n");
    while (scanf("%c %d %d", &ch, &row, &col) == 3)
    {
        if (ch != '\n')
        {
            chline(ch, row, col);
        }
        printf("输入想打印的字符以及打印多少行多少列,按q退出:\n");
    }

    getchar();

    return 0;
}

void chline(char ch, int rows, int cols)
{
    int i, j;
    char temp;

    for (i = 1; i <= rows; i++)
    {
        for (temp = ch, j = 1; j <= i; j++) // 如果想要每一个开始的字符一致,只需要在内循环当中改变字符的值即可
        {
            printf("%c", temp);
            temp++;
        }
        printf("\n");
    }
}