# include<stdio.h>
# define PAGES 959

int main(void)
{
    printf("*%d*\n", PAGES);
    printf("*%2d*\n", PAGES); // 2字段宽度,因为打印的内容是3字段宽度,所以自动扩宽
    printf("*%10d*\n", PAGES); // 左对齐,10字段宽度
    printf("*%-10d*\n", PAGES); // 右对齐,10字段宽度

    getchar();

    return 0;
}