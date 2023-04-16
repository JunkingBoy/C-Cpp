/**
 * @Author: Lucifer
 * @Date: 4/16/2023, 7:41:35 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 4/16/2023, 7:41:35 PM
 * Description: ZenO悖论
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>

int main(void)
{
    int t_ct; // 项计数
    double time, power_of_2;
    int limit;

    printf("输入你想射几米:");
    scanf("%d", &limit);
    // 箭永远只会行进一半的路程
    for (time = 0, power_of_2 = 1, t_ct = 1; t_ct <= limit; t_ct++, power_of_2 *= 2.0)
    {
        time += 1.0 / power_of_2;
        printf("time = %f, 当terms = %d \n", time, t_ct);
    }

    getchar();
    getchar();

    return 0;
}