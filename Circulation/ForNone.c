/**
 * @Author: Lucifer
 * @Date: 4/16/2023, 5:26:45 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 4/16/2023, 5:26:45 PM
 * Description: for循环当中省略表达式的写法
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>

int main(void)
{
    int n, ans, time;
    ans = 2;
    time = 1;

    for (n = 3; ans <= 25;)
    {
        ans = ans * n;
        printf("循环次数: %d \n", time);
        time++;
    }

    printf("n = %d, ans = %d\n", n, ans * n);

    getchar();

    return 0;
}