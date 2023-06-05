# include<stdio.h>
# include<string.h>
# define SIZE 80
char * s_gets(char * st, int n); // 返回值是指针

int main(void)
{
    char flower[SIZE];
    char addon [] = "s smell like old shoes.";

    puts("What is your favoritye flower?");
    if (s_gets(flower, SIZE))
    {
        strcat(flower, addon);
        puts(flower);
        puts(addon);
    }
    else
        puts("End of file encountered!");
    puts("Eyes");

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