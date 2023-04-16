/**
 * @Author: Lucifer
 * @Date: 4/16/2023, 5:37:23 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 4/16/2023, 5:37:23 PM
 * Description: ,运算符，在一个for循环中，每个条件表达式可以用,来表达多种条件
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>

int main(void)
{
    const int FIRST_OZ = 46;
    const int NEXT_OZ = 20;
    int ounces, cost;

    printf("  ounces cost\n");
    for (ounces = 1, cost = FIRST_OZ; ounces <= 16; ounces++, cost += NEXT_OZ)
    {
        printf("%5d    $%4.2f\n", ounces, cost / 100.0);
    }

    getchar();

    return 0;
}