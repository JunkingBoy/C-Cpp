# include<stdio.h>
# include<stdbool.h>

int main(void)
{
    long num; long sum = 0L; _Bool input_is_good;

    printf("输入一个数");
    printf("q 或者 quit 退出:");
    input_is_good = (scanf("%ld", &num) == 1);

    while (input_is_good)
    {
        sum = sum + num;
        printf("输入一个数");
        printf("q 或者 quit 退出:");
        input_is_good = (scanf("%ld", &num) == 1);
    }

    printf("Down!");

    getchar();

    return 0;
}