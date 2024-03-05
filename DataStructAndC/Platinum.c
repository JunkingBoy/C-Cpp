/*
 * @Author: Lucifer
 * @Data: Do not edit
 * @LastEditors: Lucifer
 * @LastEditTime: 2023-11-04 02:39:38
 * @Description: 
 */
#include <stdio.h>
float WeightValue(float weight);

int main(void)
{
    float weight; /* 变量weight存储体重 */
    float value; /* 变量value存储将体重转化成白金的值 */
    
    printf("请输入你的体重:");
    scanf("%f", &weight);

    value = WeightValue(weight);
    if (value != 0)
    {
        printf("你的体重转化成白金以后的价格是:$%.2f.\n", value);
    }
    else
    {
        printf("体重数据小于等于零:%.2f.", &weight);
    }

    getchar();
    getchar();

    return 0;
}

float WeightValue(float weight)
{
    if (weight > 0)
        return 1700.0 * weight * 14.5833;
    else
        return 0;
}