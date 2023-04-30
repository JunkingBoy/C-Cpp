/**
 * @Author: Lucifer
 * @Date: 4/30/2023, 3:19:24 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 4/30/2023, 3:19:24 PM
 * Description: break在循环当中的使用,这是一个计算面积的程序
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>

int main(void)
{
    float length, width;

    printf("Enter the length of the rectangle:\n");
    while (scanf("%f", &length) == 1)
    {
        printf("长度 = %0.2f: \n", length);
        printf("输入宽度:\n");
        if (scanf("%f", &width) != 1)
            break;
        printf("宽度: %0.2f: \n", width);
        printf("Area = %0.2f: \n", length * width);
        printf("Enter the length of the rectangle:\n");
    }

    printf("Done.\n");

    getchar();

    return 0;
}