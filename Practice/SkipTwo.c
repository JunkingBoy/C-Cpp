# include<stdio.h>

int main(void)
{
    int n;

    printf("请输入你希望的n的值:\n");
    scanf("%*d  %*d %d", &n);
    getchar();
    printf("最终得到的n的值是: %d\n", n);

    getchar();

    return 0;
}