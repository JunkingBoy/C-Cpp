# include<stdio.h>

int main(void)
{
    int a, b;

    a = 5;
    b = 2;
    b = a;
    a = b;
    // 输出两个5
    printf("%d, %d", a, b);

    getchar();
    return 0;
}