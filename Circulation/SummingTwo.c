# include<stdio.h>

int main(void)
{
    long num; long sum = 0L; int status;

    printf("请输入一个整型整数进行求和");
    printf("(q 或者 quit 退出):");
    while ((scanf("%ld", &num)) == 1)
    {
        sum = sum + num;
        printf("请输入一个整型整数进行求和 (q 或者 quit 退出):");
    }

    getchar();

    return 0;
}