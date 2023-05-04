/**
 * @Author: Lucifer
 * @Date: 5/4/2023, 4:33:42 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/4/2023, 4:33:42 PM
 * Description: 菜单程序示例,函数示例
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
# include "hotel.h"

int menu(void)
{
    int nights;
    double hotel_rate;
    int code;

    while ((code = menu()) != QUIT)
    {
        switch (code)
        {
        case 1:
            hotel_rate = HOTEL1;
            break;
        case 2:
            hotel_rate = HOTEL2;
            break;
        case 3:
            hotel_rate = HOTEL3;
            break;
        case 4:
            hotel_rate = HOTEL4;
            break;
        default:
            hotel_rate = 0.0;
            printf("Oops.\n");
            break;
        }
        nights = getNights();
        showPrice(hotel_rate, nights);
    }

    printf("谢谢惠顾!");

    return 0;
}

int getNights(void)
{
    int nights;
    printf("需要入住多少天?");
    while (scanf("%d", &nights) != 1)
    {
        scanf("%*s"); // 处理非整数输入
        printf("请输入整数,例如:2.0\n");
    }

    return nights;
}

void showPrice(double rate, int nights)
{
    int n;
    double total = 0.0;
    double factor = 1.0;

    for (n = 1; n <= nights; n++, factor *= DISCOUNT)
        total += rate * factor;
    printf("总金额为:$%0.2f.\n", total);
}