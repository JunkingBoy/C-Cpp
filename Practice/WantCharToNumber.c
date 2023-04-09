# include<stdio.h>

int main(void)
{
    char want;

    printf("输入你想转换的字符:\n");
    scanf("%c", &want);
    getchar();
    printf("字符 %c 转化为数字是: %d\n", want, want);

    getchar();

    return 0;
}