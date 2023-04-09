# include<stdio.h>

int main(void)
{
    int bph2o = 212;
    int rv;

    rv = printf("%d F is water's boiling point.\n", bph2o);
    printf("printf()函数打印 %d 字符!\n", rv);

    getchar();

    return 0;
}