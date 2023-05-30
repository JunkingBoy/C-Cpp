/*
 * @Author: Lucifer
 * @Data: 2023-05-28 23:55:58
 * @LastEditors: Lucifer
 * @LastEditTime: 2023-05-30 21:17:33
 * @Description: 字符串字符数统计
 */
# include<stdio.h>
void put_div(const char * string);
int put_count(const char * string);

int main(void)
{
    put_div("If I'd as much money");
    put_div(" as I could spend,\n");
    printf("I count %d characters.\n");
        put_count("I never would cry old chairs to mend.");
    
    getchar();

    return 0;
}

void put_div(const char * string)
{
    while(*string) // 遇到空字符时测试条件为假
        putchar(*string++);
}

int put_count(const char * string)
{
    int count = 0;
    while (*string)
    {
        putchar(*string++);
        count++;
    }

    putchar('\n');

    return (count);
}
