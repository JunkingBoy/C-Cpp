/**
 * @Author: Lucifer
 * @Date: 4/27/2023, 9:57:28 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 4/27/2023, 9:57:28 PM
 * Description: 字符数组声明、循环控制、双重条件控制循环
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>

int main(void)
{
    char ch[26];
    char temp = 'a'; // 字符的递增也和数字的递增一样,a -> b,形如:1 -> 2
    int i;

    for (i = 0; i < 26; i++, temp++) // 注意不能写成char temp = 'a'; temp < 26; temp++ ---> 因为'a'转化到int类型的数字的时候不是1
    {
        ch[i] = temp;
    }

    for (int i = 0; i < 26; i++)
    {
        printf("%c\n", ch[i]);
    }

    getchar();
    
    return 0;
}