/**
 * @Author: Lucifer
 * @Date: 4/29/2023, 10:38:10 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 4/29/2023, 10:38:10 PM
 * Description: if branching statement
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>

int main(void)
{
    const int FREEZING = 0;
    float temperature;
    int cold_days = 0;
    int all_days = 0;

    printf("Enter the list of daily low temperatures. \n");
    printf("Use Celsius, and enter q to quit. \n");
    while (scanf("%f", &temperature) == 1)
    {
        all_days++;
        if (temperature < FREEZING) // if 复合语句
        {
            cold_days++;
        }
        if (all_days != 0)
        {
            printf("%d days total: %.lf%% were below freezing.\n",
            all_days, 100.0 * (float) cold_days / all_days);
        }
        if (all_days == 0)
            printf("No data entered!\n"); // if简单语句
        
        getchar();

        return 0;
    }
}