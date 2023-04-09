# include<stdio.h>

int main(void)
{
    // 声明一个字符，同时使用字符打印和十进制整数打印，观察字符在内存当中的存储方式
    char ch;

    printf("输入你希望打印的字符:\n");
    scanf("%c", &ch); // 字符的占位符是%c
    getchar();
    printf("字符%c的十进制表示数是:%d", ch, ch);
    getchar();

    return 0;
}