/*
 * @Author: Lucifer
 * @Data: 2023-05-28 22:19:00
 * @LastEditors: Lucifer
 * @LastEditTime: 2023-05-28 22:19:00
 * @Description: 
 */
# include<stdio.h>
# define DEF "I am a #defined string"

int main(void)
{
    char str1[80] = "An array was initialized to me.";
    const char * str2 = "A pointer was initialized to me.";

    puts("I am a argument to puts().");
    puts(DEF);
    puts(str1);
    puts(str2);
    puts(&str1[5]);
    puts(str2 + 4);
    /** 
     * puts()函数的形参是字符串的地址 -> 指针.因为数组自动把数组名作为字符串第一个单词的指针,所以可以直接传数组名
     */

    getchar();

    return 0;
}