# include<stdio.h>

int main(void)
{
    /* 声明一个整数，该整数大于计算机最大的整数存储范围 */
    int i = 2147483647;
    /* 声明一个非负整数，也是大于计算机最大的非负整数存储范围 */
    unsigned int j = 4294967295;

    // 打印上述两个数观察结果
    printf("%d, %d, %d", i, i+1, i+2);
    printf("%u, %u, %u", j, j+1, j+2); // %u是非负整数的占位符, 打印long类型整数就用%ld

    getchar();

    return 0;
}