/**
 * @Author: Lucifer
 * @Date: 5/6/2023, 5:02:11 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/6/2023, 5:02:11 PM
 * Description: 部分初始化数组
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
# define SIZE 4

int main(void)
{
    int some_days[SIZE] = {1492, 2023};
    int index;

    for (index = 0; index < SIZE; index++)
        printf("%2d %14d\n", index + 1, some_days[index]);
    
    getchar();
    
    return 0;
}