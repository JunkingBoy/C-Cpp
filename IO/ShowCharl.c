/**
 * @Author: Lucifer
 * @Date: 5/1/2023, 12:57:58 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/1/2023, 12:57:58 PM
 * Description: 使用scanf()函数处理换行符
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
void display(char cr, int lines, int width);

int main(void)
{
    int ch; // 待打印字符
    int rows, cols; // 打印的行列数
    printf("输入两个整数:\n");
    while ((ch = getchar()) != '\n')
    {
        if (scanf("%d %d", &rows, &cols) != 2) // 上一个写法scanf()函数把换行符赋值给了ch,刚还是结束条件,所以没有输入就退出程序了
            break;
        display((char) ch, rows, cols);
        printf("输入另一个行和列:\n");
        printf("输入一个新行或者quit退出.\n");
    }

    getchar();

    printf("退出!");
    
    return 0;
}

void display(char cr, int lines, int width)
{
    int row, col;

    for (row = 1; row <= lines; row++) // 打印行
    {
        for (col = 1; col <= width; col++) // 打印列
            putchar(cr);
        putchar('\n'); // 结束一行开始零一行
    }
    
}