/**
 * @Author: Lucifer
 * @Date: 4/29/2023, 11:30:09 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 4/29/2023, 11:30:09 PM
 * Description: 电费经典题目
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
# define RATE1 0.13230
# define RATE2 0.15040
# define RATE3 0.30025
# define RATE4 0.34025
# define BREAK1 360.0
# define BREAK2 468.0
# define BREAK3 720.0
# define BASE1 (RATE1 * BREAK1)
# define BASE2 (BASE1 + (RATE2 * (BREAK2 - BREAK1)))
# define BASE3 (BASE2 + (RATE3 * (BREAK3 - BREAK2)))

int main(void)
{
    double kwh;
    double bill;

    printf("请输入使用的电量(kwh):\n");
    scanf("%lf", &kwh);
    if (kwh <= BREAK1)
        bill = RATE1 * kwh;
    else if (kwh < BREAK2)
        bill = BASE1 + (RATE2 * (kwh - BREAK1)); // 360 - 480 kwh
    else if (kwh < BREAK3)
        bill = BASE2 + (RATE3 * (kwh - BREAK2)); // 468 - 720 kwh
    else
        bill = BREAK3 + (RATE4 * (kwh - BREAK3)); // 超过720 kwh
    printf("用电: %.lf kwh, 电费为: $%1.2f. \n", kwh, bill);

    getchar();

    getchar();
    
    return 0;
}