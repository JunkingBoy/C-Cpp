/**
 * @Author: Lucifer
 * @Date: 4/16/2023, 5:20:14 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 4/16/2023, 5:20:14 PM
 * Description: A test case about for
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>

int main(void)
{
    int num;

    printf("    n no cube\n");

    for (num = 1; num <= 6; num++)
    {
        printf("%5d %5d\n", num, num*num*num);
    }

    getchar();

    return 0;
}