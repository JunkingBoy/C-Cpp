/**
 * @Author: Lucifer
 * @Date: 4/30/2023, 2:26:36 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 4/30/2023, 2:26:36 PM
 * Description: 条件运算符在实际中的运用
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
# define COVERAGE 350

int main(void)
{
    int sq_feet;
    int cans;

    printf("Enter number of square feet to be painted: \n");
    while (scanf("%d", &sq_feet) == 1)
    {
        cans += sq_feet / COVERAGE;
        cans += (sq_feet % COVERAGE == 0) ? 0 : 1; // 先判断sq_feet % COVERAGE的true或false
        printf("You need %d %s of paint.\n", cans, cans == 1 ? "can" : "cans");
        printf("Enter next value (q or quit to quit):\n");
    }

    getchar();

    return 0;
}