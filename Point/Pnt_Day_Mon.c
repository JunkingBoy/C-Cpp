/**
 * @Author: Lucifer
 * @Date: 5/10/2023, 10:18:30 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/10/2023, 10:18:30 PM
 * Description: 使用指针表示数组的值
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
# define MONTHS 12

int main(void)
{
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int index;

    for (index = 0; index < MONTHS; index++)
        printf("%2d 月, 有 %d 天\n", index + 1, *(days + index)); // 这里的index+1对于16进制地址来说就是下一个元素的地址
    // *(days + index) == days[index];
    
    getchar();

    return 0;
}