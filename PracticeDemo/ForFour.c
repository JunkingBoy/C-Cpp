# include<stdio.h>

int main(void)
{
    const int n = 5;
    int k;
    char start = 'A';
    char end;

    for (int i = 1; i <= n; i++)
    {
        /**
         * 空格数减少,从打印的最多的行数开始 --> 用字符表示空格
         * 从最终行数开始,递减,结束规则使用打印的行数递增来判断 ---> j > i
        */
        // 先打五个空格
        for (int j = n; j > i; j--)
        {
            printf("%c", 32); // 32的ASCII码是空格
        }
        // 打首字母
        for (k = 0; k < i; k++)
        {
            printf("%c", k + start);
        }
        // 从第二行开始倒着输出
        for (int l = i - 2; l >= 0; l--)
        {
            printf("%c", l + start);
        }        
        printf("\n");
    }
    
    getchar();

    return 0;
}