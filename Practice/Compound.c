# include<stdio.h>

int main(void)
{
    int index, sum;

    index = 0;
    sum = 0;

    while (index++ < 10)
        sum = sum * index + 2;
    /* 这个句子中，printf只被执行了一次 */
    printf("sum = %d\n", sum);

    getchar();

    return 0;
}