/**
 * @Author: Lucifer
 * @Date: 4/29/2023, 10:51:26 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 4/29/2023, 10:51:26 PM
 * Description: if...else branching statements
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>

int main(void)
{
    const int FREEZING = 10;
    float temperature;
    int cold_days = 0;
    int all_days = 0;

    printf("Enter the list of daily low temperatures. \n");
    printf("Use Celsius, and enter q to quit. \n");
    while (scanf("%f", &temperature) == 1)
    {
        all_days++;
        if (temperature < FREEZING)
        {
            cold_days++;
        } else {
            printf("!!!");
        }
        
        getchar();

        return 0;
    }
    
}