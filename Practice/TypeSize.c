# include<stdio.h>

int main(void)
{
    /* 类型大小的占位符是&zd */
    printf("整数类型的大小为 %zd 字节\n", sizeof(int));
    printf("字符类型的大小为 %zd 字节\n", sizeof(char));
    printf("长整数类型的大小为 %zd 字节\n", sizeof(long));
    printf("长长整数类型的大小为 %zd 字节\n", sizeof(long long));
    printf("双精度浮点数类型的大小为 %zd 字节\n", sizeof(double));
    printf("长双精度浮点数类型的大小为 %zd 字节\n", sizeof(long double));

    getchar();

    return 0;
}