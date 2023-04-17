/**
 * @Author: Lucifer
 * @Date: 4/17/2023, 11:19:54 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 4/17/2023, 11:19:54 PM
 * Description: 循环在数组当中的使用
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
# define SIZE 10
# define PAR 72

int main(void)
{
    int index, score[SIZE];
    int sum = 0;
    float average;

    // 输入十个数
    printf("请输入%d个数:\n", SIZE);
    for (index = 0; index < SIZE; index++)
        scanf("%d", &score[index]);
    printf("输入的十个数是:\n");
    for (index = 0; index < SIZE; index++)
        printf("%5d", score[index]);
    printf("\n");
    // 总数
    for (index = 0; index < SIZE; index++)
        sum += score[index];
    // 平均数
    average = (float)sum / SIZE;
    printf("总数%d, 平均数%.2f", sum, average);
    // 得分
    printf("%.0f\n", average - PAR);

    return 0;
}