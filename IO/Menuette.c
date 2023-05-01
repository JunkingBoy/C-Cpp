/**
 * @Author: Lucifer
 * @Date: 5/1/2023, 2:43:11 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/1/2023, 2:43:11 PM
 * Description: 菜单程序示例,getchar()把字符解释成字符编码,scanf()函数也是一样
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
char get_choice(void);
char get_first(void);
int get_int(void);
void count(void);

int main(void)
{
    int choice;

    while ((choice = get_choice()) != 'q')
    {
        switch (choice)
        {
        case 'a':
            printf("a.\n");
            break;
        case 'b':
            putchar('\a');
            break;
        case 'c':
            count();
            break;
        default:
            printf("项目错误!");
            break;
        }
    }
    printf("关闭!\n");

    return 0;
}

/** 求和 */
void count(void)
{
    int n, i;

    printf("输入需要递增打印的数:\n");
    n = get_int();
    for (i = 1; i <= n; i++)
        printf("%d.\n", i);
    while (getchar() != '\n')
        continue;
}

/** 获取菜单选项 */
char get_choice(void)
{
    int ch; // 使用int类型代替char类型,可以接受EOF

    printf("选择下列选项:\n");
    printf("a. advice      b. bell\n");
    printf("c. count       q. quit\n");
    ch = get_first();
    while ((ch < 'a' || ch > 'c') && ch != 'q')
    {
        printf("请输入正确选项!");
        ch = get_first();
    }

    return (char) ch;
}

/** 获取输入的第一个字符 */
char get_first(void)
{
    int ch;

    ch = getchar();
    while (getchar() != '\n')
        continue;
    
    return (char) ch;
}

int get_int(void)
{
    int input;
    char ch;

    while (scanf("%d", &input) != 1)
    {
        while ((ch = getchar()) != '\n')
            putchar(ch); // 处理错误输出
        printf("输入不是整数,\n请重新输入:");
        printf("输入的值类似: 25 -178 3:");
    }

    return input;
}