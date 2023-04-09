# include<stdio.h>
# include<string.h> /* 提供strlen()函数原型 */
# define Jun "You"

int main(void)
{
    char name[40];

    printf("你叫啥?\n");
    scanf("%s", name);
    getchar();

    printf("你好 %s , %s \n", name, Jun);
    printf("你的姓名长度是 %zd, 但是声明的数组空间大小是 %zd \n", strlen(name), sizeof name);
    // 由输出结果很容易得知:name声明的大小是40,sizeof 得到的是变量name的声明的空间大小
    // strlen()函数得到的是变量使用的空间大小
    getchar();

    return 0;
}