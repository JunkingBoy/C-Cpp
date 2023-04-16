# include<stdio.h>
/* 函数原型 */
void smile(void);

int main(void)
{
    /*使用do while循环实现*/
    int i = 0;

    do
    {
        smile();
        if (i == 2)
        {
            printf("\n");
        }else if (i == 4)
        {
            printf("\n");
        }
        i++;
    } while (i != 6);
    
    getchar();

    return 0;
}

/* 函数定义 */
void smile(void)
{
    printf("Smile!");
}