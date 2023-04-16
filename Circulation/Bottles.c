# include<stdio.h>
# define MAX 100

int main(void)
{
    int count = MAX - 98;
    int i = 0;

    while (--count > 0) // 先递减为1,在对测试条件求值
    {
        printf("%d", count);
        i += 1;
        printf("循环次数: %d \n", i);
    }
    
    getchar();

    return 0;
}