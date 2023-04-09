# include<stdio.h>

int main(void)
{
    int a = 1, b = 1;
    int a_post, pre_b;

    a_post = a++; // 后缀递增 ---> 使用a之后给递增a
    pre_b = ++b; // 前缀递增 ---> 使用b之前递增b
    /* 
    需要注意的是这两种赋值结果完全不一样
    */

    printf("a  a_post      b      pre_b:\n");
    printf("%d, %3d, %8d, %7d", a, a_post, b, pre_b);

    getchar();

    return 0;
}