/**
 * @Author: Lucifer
 * @Date: 4/29/2023, 11:43:48 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 4/29/2023, 11:43:48 PM
 * Description: else匹配的if变式
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>

int main(void)
{
    int number;
    scanf("%d", &number);

    if (number > 6)
    {
        if (number < 12)
            printf("关闭!");
    }
    else // 这个else匹配的if是结构体({})外的if
        printf("继续!");
    
    getchar();

    getchar();

    return 0;
}