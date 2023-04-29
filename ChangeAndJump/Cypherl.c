/**
 * @Author: Lucifer
 * @Date: 4/29/2023, 10:59:44 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 4/29/2023, 10:59:44 PM
 * Description: getchar()函数和putchar()函数的结合使用
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
# define SPACE ' '

int main(void)
{
    char ch;

    ch = getchar();
    while (ch != '\n')
    {
        if (ch == SPACE)
            putchar(ch);
        else
            putchar(ch + 1);
            /**
             * ch被转为int类型
             * int类型的计算结果被传递给接受一个int类型参数的putchar()
             * 根据最后一个字节确定显示哪个字符
             * 如果最后输入.则会被转化为/ ---> 斜杠对应的ASCII码比点号对应的ASCII码多1
            */
        ch = getchar();
    }

    putchar(ch);

    getchar();
    
    return 0;
}