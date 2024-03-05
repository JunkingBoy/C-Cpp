/*
 * @Author: Lucifer
 * @Data: Do not edit
 * @LastEditors: Lucifer
 * @LastEditTime: 2024-02-28 00:40:32
 * @Description: 
 */
#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
char pairs(char a);
bool isValid(char* s);

char pairs(char a)
{
    switch (a)
    {
    case '}':
        return '{';
    case ']':
        return '[';
    case ')':
        return '(';
    }

    return 0;
}

bool isValid(char* s) {
    /**
     * 奇数个字符长度直接为false
    */
    int n = strlen(s);
    if (n % 2 == 1)
        return false;

    /**
     * 创建栈空间 -> int 数组替代,栈顶数据
    */
    int stack[n + 1], top = 0;
    /**
     * 字符当中循环
    */
    for (int i = 0; i < n; i++)
    {
        char ch = pairs(s[i]); // 传入字符判断
        if (ch)
        {
            if (top == 0 || stack[top - 1] != ch)
                return false;
            top--; // 出栈
        }else
        {
            // 入栈
            stack[top++] = s[i];
        }
    }

    return top == 0;
}