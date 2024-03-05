/*
 * @Author: Lucifer
 * @Data: Do not edit
 * @LastEditors: Lucifer
 * @LastEditTime: 2023-11-16 16:20:18
 * @Description: 
 */
# include<stdio.h>

int main(void)
{
    unsigned int un = 3000000000; /* int为32位和short为16位的系统 */

    printf("un = %u and not %d.\n", un, un); /* 使用错误的转换说明一个数会有错误的结果 */

    return 0;
}