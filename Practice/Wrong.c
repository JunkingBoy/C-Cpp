# include<stdio.h>

int main(void)
{
    int i = 1;
    float n;
    while (i < 30)
    {
        n = 1/i;
        printf("%f", n);
        // 死循环
    }

    getchar();

    return 0;
}