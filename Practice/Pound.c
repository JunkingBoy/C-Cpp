# include<stdio.h>

void pound(int n)
{
    while (n-- > 0)
    {
        printf("#");
    }
    printf("\n");
}

int main(void)
{
    int times = 5;
    char ch = '!';// ASCII码为33,1字节
    float f = 6.0;

    pound(times);
    pound(ch); // 变为4字节33传入
    pound(f); // = pound((int)f);

    getchar();

    return 0;
}