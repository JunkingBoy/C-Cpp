# include<stdio.h>

int main(void)
{
    int n = 0;
    size_t intsize;

    intsize = sizeof(int);

    printf("n = %d, n 占 %zd 字节; 所有的整数占 %zd 字节.\n", n, sizeof n, intsize);

    getchar();

    return 0;
}