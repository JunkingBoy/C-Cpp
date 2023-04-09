# include<stdio.h>
# include<inttypes.h> // 支持可移植类型

int main(void)
{
    /* 声明一个32位有符号的整型变量 */
    int32_t me32;

    me32 = 45933945;
    printf("常规输出int32类型:\n");
    printf("me32 = %d\n", me32);

    // 使用字符串宏显示可移植类型
    // printf("me32 = %" PRId32 "\n", me32); // C可以把多个连续的字符串组合成一个字符串
    // 在inttypes.h宏文件中把`PRID32`定义为了字符"d"
    // 所以上述输出等价于printf("me32 = %d\n", me32);

    getchar();

    return 0;
}