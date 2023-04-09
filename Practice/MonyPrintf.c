# include<stdio.h>

int main(void)
{
    unsigned int un = 3000000000; // int 为32位和short为16位的系统
    short end = 200;
    long big = 65537;
    long long veryBig = 12345678908642;

    // 打印这些数
    printf("un = %u, 不是: %d\n", un, un); // 无符号的un用%d表示会得到负值,因为un的表示和-129496296表示相同, 如果告诉pringtf打印无符号是正值，如果是有符号会是另一个值
    printf("end = %hd, 也可以是: %d\n", end, end); // %hd表示short的占位符,如果操作系统位数不同的话可以用%d表示,long也是如此
    printf("big = %ld, 不是: %hd\n", big, big); // long类型的占位符用%ld表示
    printf("veryBig = %lld, 不是: %ld\n", veryBig, veryBig);

    getchar();

    return 0;
}