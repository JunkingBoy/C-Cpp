/*
 * @Author: Lucifer
 * @Data: 2023-05-28 22:19:00
 * @LastEditors: Lucifer
 * @LastEditTime: 2023-05-28 23:57:13
 * @Description: getchar和putchar编写一个puts的自定义函数
 */
# include<stdio.h>
void putl(const char * string);

void putl(const char * string)
{
    while (* string != '\0')
        putchar(*string++);
}