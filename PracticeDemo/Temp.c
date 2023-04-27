#include <stdio.h>
 
int main()
{
    int j, k, l, h;
    int n;
    char c = 'A';
    printf("请输入：");
    scanf("%d", &n);
    //总行数
    for(h=1;h<=n;h++)
    {
        //随着行数的增加，空格的数也随着减少，就会产生一种三角形的感觉
        for(j=n;j>h;j--)
            printf("%c", 32);
        for(k=0;k<h;k++)
            printf("%c", k+c);
        //第一行只有A不需要倒叙输出，所以从B开始
        // for(l=h-2;l>=0;l--)
        //     printf("%c",l+c);
        printf("\n");
    }

    getchar();

    getchar();
    
    return 0;
}