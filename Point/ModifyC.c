/**
 * @Author: Lucifer
 * @Date: 5/12/2023, 10:09:35 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/12/2023, 10:09:35 PM
 * Description: 通过指针安全修改数组当中的每一个值
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
void addTo(double ar[], int n, double val);

int main(void)
{
    double data[2] = {100.00, 200.00};

    for (int i = 0; i < 2; i++)
        printf("数组索引 %d 的值是 %.lf.\n", i, data[i]);
    
    // 调用函数修改数组中每个值
    addTo(data, 2, 2.50);

    for (int i = 0; i < 2; i++)
        printf("更新后数组索引 %d 的值是 %.lf.\n", i, data[i]);

    getchar();
    
    return 0;
}

void addTo(double ar[], int n, double val) // 该函数通过指针直接使用了原始数据
{
    int i;

    for (i = 0; i < n; i++)
        ar[i] += val;
}