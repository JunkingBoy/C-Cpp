/**
 * @Author: Lucifer
 * @Date: 5/3/2023, 4:33:07 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/3/2023, 4:33:07 PM
 * Description: 递归的示例和递归的使用
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
void up_and_down(int);

int main(void)
{
    up_and_down(1);

    getchar();

    return 0;
}

void up_and_down(int n)
{
    printf("数 %d: n 在计算机中的存储地址是 %p \n", n, &n); // &取址符号
    if (n < 4)
        up_and_down(n + 1);
    printf("数 %d: n 在计算机中的存储地址是 %p \n", n, &n);
}