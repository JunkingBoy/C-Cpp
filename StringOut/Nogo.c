# include<stdio.h>
# define ANSWER "Grant"
# define SIZE 40
char * s_gets(char * st, int n);

int main(void)
{

}

char * s_gets(char * st, int n)
{
    char * ret_val;
    int i = 0;

    ret_val = fgets(st, n, stdin); // 返回指向char 的指针,如果读到文件结尾,返回空指针
    if (ret_val)
    {
        while (st[i] != '\n' && st[i] != '\0')
            i++;
        if (st[i] == '\n')
            st[i] == '\0';
        else
            while (getchar() != '\n')
                continue;
    }

    return ret_val;
}