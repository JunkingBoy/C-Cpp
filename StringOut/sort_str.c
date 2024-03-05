/*
 * @Author: Lucifer
 * @Data: Do not edit
 * @LastEditors: Lucifer
 * @LastEditTime: 2024-02-17 23:39:55
 * @Description: 
 */
# include<stdio.h>
# include<string.h>
# define SIZE 81 /* 限制字符串长度,包括\0 */
# define LIM 20 /* 可读入的最多行数 */
# define HALT "" /* 空字符串停止输入 */
void stsrt (char *strings [], int num); /* 字符串排序函数 */
char * s_gets(char * st, int n);

int main(void)
{
    char input[LIM][SIZE]; // 存储输入数组
    char *ptstr[LIM]; // 内含指针变量的数组
    int ct = 0; // 输入计数
    int k; // 输出计数

    printf("Input up to %d lines, and I will sort them.\n", LIM);
    printf("To stop, press the Enter key at a line's start.\n");
    while (ct < LIM && s_gets(input[ct], SIZE) != NULL && input[ct][0] != '\0') // 输入的行数小于设置的行数,每一行有输入内容,每一行输入的第一个字符不是空字符
    {
        ptstr[ct] = input[ct]; // 设置指针指向字符串
        ct++;
    }
    stsrt(ptstr, ct); // 字符串排序
    puts("\nHere's the sorted list:\n");
    for (k = 0; k < ct; k++)
        puts(ptstr[k]);

    getchar();
    
    return 0;
}

void stsrt(char *strings [], int num)
{
    // 形参是二维字符指针 -> 指向指针的指针
    char *temp;
    int top, seek;

    for (top = 0; top < num - 1; top++)
    {
        for (seek = top + 1; seek < num; seek++)
        {
            // 利用strcmp函数的特性,比较字符在机器表的正负关系,判断是否需要进行交换位置
            if (strcmp(strings[top], strings[seek]) > 0) // 因为strings被声明成指针类型,所以strings[top]指针的解引用 -> 这里交换的是两个指针的指向
            {
                temp = strings[top];
                strings[top] = strings[seek];
                strings[seek] = temp;
            }
        }
    }
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin);
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}