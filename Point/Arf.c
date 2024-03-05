/*
 * @Author: Lucifer
 * @Data: Do not edit
 * @LastEditors: Lucifer
 * @LastEditTime: 2024-02-26 17:27:17
 * @Description: 
 */
/**
 * @Author: Lucifer
 * @Date: 5/12/2023, 10:59:27 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/12/2023, 10:59:27 PM
 * Description: 使用const使得数组安全
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
#include <stdio.h>
#define SIZE 5
void showArray(const double ar[], int n);
void multArray(double ar[], int n, double mult);

int main(void)
{
    double dip[SIZE] = {20.0, 17.66, 8.2, 15.3, 22.22};
    int index;

    printf("输入希望使用的功能,或者按q退出:\n");
    printf("1. 展示数组当中的数          2. 数组当中的元素乘以一个数在展示.\n");
    while (scanf("%d", &index) == 1)
    {
        switch (index)
        {
        case 1:
            showArray(dip, SIZE);
            break;
        case 2:
            printf("输入要乘以几:\n");
            int temp;
            if (scanf("%d", &temp) == 1)
            {
                multArray(dip, SIZE, temp);
                showArray(dip, SIZE);
                break;
            }
            else
            {
                printf("输入有误,请重新输入.\n");
                break;
            }
        default:
            printf("无想要的功能,请重新输入");
            printf("输入希望使用的功能,或者按q退出:\n");
            printf("1. 展示数组当中的数          2. 数组当中的元素乘以一个数在展示.\n");
            break;
        }

        printf("输入希望使用的功能,或者按q退出:\n");
        printf("1. 展示数组当中的数          2. 数组当中的元素乘以一个数在展示.\n");
    }

    return 0;
}

void showArray(const double ar[], int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("%8.3f.\n", ar[i]);
}

void multArray(double ar[], int n, double mult)
{
    int i;

    for (i = 0; i < n; i++)
        ar[i] *= mult;
}