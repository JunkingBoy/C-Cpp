# include<stdio.h>

int main(void)
{
    int a = 1, b = 1;
    int a_post, pre_b;

    a_post = 2*++a; // 首先a先递增1,其次2*a赋值给a_post
    pre_b = 2*b++; // 首先2*b,其次b递增1
    /*
    需要注意递增这个操作不能简单地视为a + 1;因为在与乘算的时候前缀递增有限计算递增
    */

    printf("a  a_post      b      pre_b:\n");
    printf("%d, %3d, %8d, %7d", a, a_post, b, pre_b);

    getchar();

    return 0;
}