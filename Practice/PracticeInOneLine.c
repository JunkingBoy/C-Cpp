# include<stdio.h>
/* 函数原型  */
void br(void);
void ic(void);

int main(void)
{
    br();
    printf(",\t");
    ic();
    printf("\n");
    ic();
    printf("\n");
    br();
    getchar();
    return 0;
}

void br(void)
{
    printf("Brazil, Russia");
}

void ic(void)
{
    printf("India, China");
}