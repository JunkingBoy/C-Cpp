# include<stdio.h>

int main(void)
{
    int count, sum;

    sum = 0;
    count = 0;

    while (count++ < 20)
    {
        sum = sum + count;
        printf("sum = %d\n", sum);
    }

    getchar();

    return 0;
}