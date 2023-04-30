/**
 * @Author: Lucifer
 * @Date: 4/30/2023, 11:39:10 AM
 * @LastEditors: Lucifer
 * @LastEditTime: 4/30/2023, 11:39:10 AM
 * Description: 约数算法优化
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>

int main(void)
{
    // 测试数只需要到num的平方即可
    int num;
    int div;

    printf("输入一个数:\n");
    scanf("%d", &num);

    for ( div = 2; (div * div) <= num; div++) // 使用等于是因为要注意完全平方数
    /**
     * 使用平方而不是平方根原因
     * 整数乘法比平方根快
    */
    {
        if (num % div == 0)
            printf("%d 是 %d 和 %d 的积.\n", num, div, num / div); // num / div需要注意的是如果num是完全平方数(一个数等于两个相同整数之积)
    }
    
    getchar();

    getchar();

    return 0;
}