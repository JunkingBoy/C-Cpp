# include<stdio.h>

int main(void)
{
    int dogs;

    printf("你有几只狗?\n");
    // 占位符+指针取值取出dogs的值
    scanf("%d", &dogs);
    // 将dogs的值传给占位符
    printf("你有%d只狗!\n", dogs);
    getchar();
    return 0;
}