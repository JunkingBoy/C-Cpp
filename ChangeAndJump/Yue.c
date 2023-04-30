/**
 * @Author: Lucifer
 * @Date: 4/30/2023, 11:24:29 AM
 * @LastEditors: Lucifer
 * @LastEditTime: 4/30/2023, 11:24:29 AM
 * Description: 约数算法
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>

int main(void)
{
    int num;
    int div;

    printf("输入一个数:\n");
    scanf("%d", &num);
    for ( div = 2; div < num; div++)
        if (num % div == 0)
            printf("%d is divisible by %d\n", num, div);
    /**
     * 算法缺陷:
     * 如果144%2得0,说明2是144的约数.
     * 144/2得72,说明72也是144约数
     * 所以num%div可以获得两个约数
     * 那么实际上不需要循环到143,只需要循环12次即可停止循环
    */
    
    getchar();

    getchar();

    return 0;
}