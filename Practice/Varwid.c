# include<stdio.h>

int main(void)
{
    unsigned width, precision;
    int number = 256;
    double weight = 242.5;

    printf("输入一个宽度:\n");
    scanf("%d", &width);
    printf("这个数字是: %*d\n", width, number);
    printf("现在请输入一个width和presicion:\n");
    scanf("%d %d", &width, &precision);
    getchar();
    printf("weight = %*.*f\n", width, precision, weight);
    printf("Done!");

    getchar();

    return 0;
}