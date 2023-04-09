# include<stdio.h>

int main(void)
{
    int n = 0;

    while (n < 7)
    {
        printf("n = %d\n", n);
        n++;
        printf("Now n = %d\n", n);
    }
    printf("结束循环!");
 
    getchar();

    return 0;
}