# include<stdio.h>
# define Jun "云在青天水在瓶!"

int main(void)
{
    char name[40];

    printf("你叫啥?\n");
    scanf("%s", name); // scanf()函数在遇到第一个空白(空格、制表符、换行符)时就不再读取输入
    getchar();
    
    printf("你好,%s, %s", name, Jun);
    getchar();
    
    return 0;
}