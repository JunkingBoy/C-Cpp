/**
 * @Author: Lucifer
 * @Date: 5/21/2023, 9:13:46 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/21/2023, 9:13:46 PM
 * Description: scanf()函数处理字符串结束的方式
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>

int main(void)
{
    char name1[11], name2[11];
    int count;

    printf("输入两个英文名:.\n");
    count = scanf("%5s %10s", name1, name2);
    printf("读取到 %d 个名字, 分别是 %s, %s.\n", count, name1, name2);

    getchar();

    return 0;
}