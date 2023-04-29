# include<stdio.h>

int main(void)
{
    int number;
    scanf("%d", &number);

    if (number > 6)
        if (number < 12)
            printf("关闭!");
    else
    /**
     * 在简单的if语句当中,else与最近的if匹配.
     * 除非是用{}括起来的语句才会有层级关系,类似
     * if()
     * {
     *     if()
     *     {
     *         
     *     }
     * }
     * else 
     * {
     *     
     * }
     * 这个当中的else与最外层的if匹配
    */
        printf("继续!\n");

    getchar();

    getchar();

    return 0;
}