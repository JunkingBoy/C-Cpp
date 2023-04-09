# include<stdio.h>
# define PAGES 336
# define WORDS 65618

int main(void)
{
    short num = PAGES;
    short mnum = -PAGES;

    printf("num作为short类型和无符号short类型的数为: %hd %hu \n", num, num);
    printf("-num作为short类型和无符号short类型的数为: %hd %hu \n", mnum, mnum);
    /*
    无符号mnum输出结果为65200原因:
    系统使用二进制补码表示有符号整数,数字0~32767代表本身,数字32768~65535表示负数
    65535表示-1,65534表示-2以此类推.-336表示为65200(65536-336)有符号整数时65200=-336
    无符号整数时65200=65200
    一个数可以被解释成两个不同的值
    */
    printf("num作为int类型和char类型的数为: %d %c \n", num, num);
    /*
    short int是2字节,使用%c打印336时,只会查看存储336的2字节中的后1字节,
    计算机会使用336模256取余,余数是80,80对应的ASCII值是字符P,
    所以打印的是字符P
    */
    printf("WORDS作为int类型、short类型、char类型的数为: %d %hd %c \n", WORDS, WORDS);

    getchar();

    return 0;
}