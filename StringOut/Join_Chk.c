# include<stdio.h>
# include<string.h>
# define SIZE 30
# define BUGSIZE 13
char * s_gets(char * st, int n);

int main(void)
{
    char flower[SIZE];
    char addon [] = "s smell like old shoes.";
    char bug[BUGSIZE];
    int available;

    puts("What is your favorite flower?");
    s_gets(flower, SIZE);
    
    if ((strlen(addon) + strlen(flower) + 1) <= SIZE) // 判断可以容纳
        strcat(flower, addon);
    
    puts(flower);
    puts("What is your favorite bug?");
    s_gets(bug, BUGSIZE);
    available = BUGSIZE - strlen(bug) - 1;
    strncat(bug, addon, available); // 安全拼接
    puts(bug);

    getchar();

    return 0;
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