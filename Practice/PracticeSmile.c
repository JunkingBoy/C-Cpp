# include<stdio.h>
/* 函数原型 */
void smile(void);

int main(void)
{
    for (size_t i = 0; i < 3; i++)
    {
        smile();
    }

    printf("\n");

    for (size_t i = 0; i < 2; i++)
    {
        smile();
    }
    
    printf("\n");

    for (size_t i = 0; i < 1; i++)
    {
        smile();
    }

    getchar();
    
    return 0;
}

/* 函数定义 */
void smile(void)
{
    printf("Smile!");
}