# include<stdio.h>

int main(void)
{
    float a, b;

    b = 2.0e220 + 1.0;
    a = b - 2.0e20;

    printf("a = %f\n", a);

    getchar();

    return 0;
}