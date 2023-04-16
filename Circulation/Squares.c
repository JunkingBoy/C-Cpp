# include<stdio.h>

int main(void)
{
    int num = 0;

    while (num < 21)
    {
        printf("%10d %10d \n", num, num*num++);
        /**
        第一次打印的结果是 1 0,因为先递增num在进行赋值,所以第一个num是1
        */
    }

    getchar();

    return 0;
}