/**
 * @Author: Lucifer
 * @Date: 5/6/2023, 4:44:33 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/6/2023, 4:44:33 PM
 * Description: 声明数组,初始化数组,打印数组节点
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
# define MONTHS 12

int main(void)
{
    // 声明数组记录一个月的天数
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;

    for (index = 0; index < MONTHS; index++)
        printf("%d 月的天数是 %d.\n", index + 1, days[index]);
    
    getchar();

    return 0;
}