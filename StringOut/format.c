# include<stdio.h>
# include<string.h>
# define MAX 20
char * s_gets(char * st, int n);

int main(void)
{
    char first[MAX];
    char last[MAX];
    char formal[2 * MAX + 10];
    double prize;

    puts("名:");
    s_gets(first, MAX);
    puts("姓:");
    s_gets(last, MAX);
    puts("输入赚的钱:");
    scanf("%lf", &prize);
    // 将上诉内容拼接起来 -> 第一个是要存储进去字符串数组,后面的参数与Print一致
    sprintf(formal, "%s, %-19s, $%6.2f", last, first, prize);
    // 打印内容
    puts(formal);

    getchar();

    return 0;
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