# include<stdio.h> // 标准输入输出宏
# include<string.h>
# define SIZE 40
# define LIM 5
char * s_gets(char * st, int n);

int main(void)
{
    char qwords[LIM][SIZE];
    char temp[SIZE];
    int i = 0;

    printf("Enter %d words beginning with q: \n", LIM);
    while (i < LIM && s_gets(temp, SIZE))
    {
        if (temp[0] != 'q')
            printf("%s doesn't begin with q? \n", temp);
        else
        {
            strcpy(qwords[i], temp);
            i++;
        }
    }

    puts("Here are the words accepted:");
    /** 输出拷贝字符串 */
    for ( i = 0; i < LIM; i++)
        puts(qwords[i]);

    getchar();

    return 0;
}

char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin); // 标准输入
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] !='\0')
            i++;
        if (st[i] == '\n')
            st[i] = '\0'; // 空字符串替换换行符 -> 读到第一个换行符的时候就使用空字符串替换 -> 第一个换行符之前的内容就作为字符串的输出
        else
            while (getchar() != '\n')
                continue; // 没读取到换行符就一直读取
    }

    return ret_val;
}
