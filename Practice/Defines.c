# include<stdio.h>
# include<limits.h> // 整型限型
# include<float.h> // 浮点限型

int main(void)
{
    printf("一些整型的系统限型:\n");
    printf("整型的最大值: %d\n", INT_MAX);
    printf("long long类型的数的最小值: %lld\n", LLONG_MIN);
    printf("一个字节 = %d 比特在当前系统\n", CHAR_BIT);
    printf("最大的双精度浮点数: %e\n", DBL_MAX);
    printf("最小的浮点数: %e\n", FLT_MIN);
    printf("最大的浮点数: %e\n", FLT_MAX);
    printf("浮点数epsilon = %e\n", FLT_EPSILON);

    getchar();

    return 0;
}