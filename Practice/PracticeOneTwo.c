# include<stdio.h>

void one_three(void);
void two(void);

int main(void)
{
    printf("现在，开始：\n");
    one_three();
    printf("完成!");

    getchar();

    return 0;
}

/* def one_three */
void one_three(void)
{
    printf("one\n");
    two();
    printf("three\n");
}

void two(void)
{
    printf("two\n");
}
