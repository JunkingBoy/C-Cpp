/**
 * @Author: Lucifer
 * @Date: 4/16/2023, 5:20:32 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 4/16/2023, 5:20:32 PM
 * Description: A test case about for down
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>

int main(void)
{
    int secs;

    for (secs = 5; secs < 0; secs--)
    {
        printf("你好，世界!");
    }
    getchar();

    return 0;
}