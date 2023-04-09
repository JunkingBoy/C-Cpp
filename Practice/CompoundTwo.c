# include<stdio.h>

int main(void)
{
    int index, sum;

    index = 0; sum = 0;

    while (index++ < 10)
    {
        sum = sum * index + 2;
        /* 每一次循环调用一次printf函数打印sum的值 */
        printf("sum = %d\n", sum);
    }
    
    getchar();

    return 0;
}