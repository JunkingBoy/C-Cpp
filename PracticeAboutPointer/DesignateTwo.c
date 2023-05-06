/**
 * @Author: Lucifer
 * @Date: 5/6/2023, 5:13:39 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/6/2023, 5:13:39 PM
 * Description: 未指定初始化数组大小,初始化特定元素初值
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>

int main(void)
{
    int days[] = {31, [6] = 31};
    int index;

    for (index = 0; index < sizeof(days); index++)
        printf("%2d %12d", index + 1, days[index]);
    
    getchar();

    return 0;
}