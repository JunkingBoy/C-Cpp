# include<stdio.h>

int main(void)
{
    float cm;
    float inch = 2.54;

    printf("请输入你的身高(单位: 厘米):\n");
    scanf("%f", &cm);
    
    getchar();

    printf("将身高转化为英寸以后是: %f\n", cm / inch);

    getchar();

    return 0;
}