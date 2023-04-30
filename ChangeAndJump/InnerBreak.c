/**
 * @Author: Lucifer
 * @Date: 4/30/2023, 3:29:37 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 4/30/2023, 3:29:37 PM
 * Description: break在嵌套循环当中的使用
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>

int main(void)
{
    int p, q;

    scanf("%d", &p);
    while (p > 0)
    {
        printf("%d\n", p);
        scanf("%d", &q);
        while (q > 0)
        {
            printf("%d\n", p * q);
            if (q > 100)
                break; // 跳出内层循环
            scanf("%d", &q);
        }
        if (q > 100)
            break; // 跳出外层循环
        scanf("%d", &p);
    }
    
    getchar();

    return 0;
}