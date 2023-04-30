/**
 * @Author: Lucifer
 * @Date: 4/30/2023, 4:31:26 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 4/30/2023, 4:31:26 PM
 * Description: switch多重标签 ---> 统计一个句子当中的字符出现的次数
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
# include<ctype.h>

int main(void)
{
    char ch;
    int a_ct, e_ct, i_ct, o_ct, u_ct;

    a_ct = e_ct = i_ct = o_ct = u_ct = 0;

    printf("Enter some text; enter # to quuit.\n");
    // ch = isupper(ch); ---> 转成大写判断,就可以变成单标签
    while ((ch = getchar()) != '#')
    {
        switch (ch)
        {
        case 'a':
        case 'A': a_ct++;
                  break;
        case 'e':
        case 'E': e_ct++;
                  break;
        case 'i':
        case 'I': i_ct++;
                  break;
        case 'o': 
        case 'O': o_ct++;
                  break;
        case 'u':
        case 'U': u_ct++;
                  break;
        default: break;
        } // switch结束
    } // while循环结束

    printf("number of vowels: A E I O U\n");
    printf("        %4d %4d %4d %4d %4d\n", a_ct, e_ct, i_ct, o_ct, u_ct);

    getchar();

    getchar();

    return 0;
}