/**
 * @Author: Lucifer
 * @Date: 4/30/2023, 2:50:08 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 4/30/2023, 2:50:08 PM
 * Description: while循环当中的continue语句,当执行到这以后执行的是测试条件
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>

int main(void)
{
    const float MIN = 0.0f;
    const float MAX = 100.0f;

    float score;
    float total = 0.0f;
    int n = 0;
    float min = MAX;
    float max = MIN;

    printf("Enter the first score (q to quit):");
    while (scanf("%f", &score) == 1)
    {
        if (score < MIN || score > MAX)
        {
            printf("%0.1f is an invalid value. Try again:", score);
            continue; // 回到while循环的测试条件当中
        }
        printf("Accepting %0.1f:\n", score);
        min = (score < min) ? score : min;
        max = (score > max) ? score : max;
        total += score;
        n++;    
        printf("Enter next score (q to quit):");
    }
    if (n > 0)
    {
        printf("Average of %d scores is %0.1f.\n", n, total / n);
        printf("Low = %0.1f, high = %0.1f\n", min, max);
    }
    else
        printf("No valid scores were entered.\n");

    getchar();

    return 0;
}