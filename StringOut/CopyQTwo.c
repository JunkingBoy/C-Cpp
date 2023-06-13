# include<stdio.h>
# include<string.h>
# define WORDS "beast"
# define SIZE 40

int main(void)
{
    const char * orig = WORDS; // 因为WORDS是一个字符串,这个赋值是把头指针赋值给了orig
    char copy[SIZE] = "Be the best that you can be.";
    char * ps;

    puts(orig);
    puts(copy);
    ps = strcpy(copy + 7, orig); // 复制orig从copy数组的第七位开始,返回的是一个指针,所以第二步骤进行了指针赋值的操作
    puts(copy); // 输出的是修改以后的copy数组
    puts(ps); // 输出的是strcpy返回的指针,注意ps是orig
    if (*ps == *orig)
        puts(ps);
    else
        printf("false!");

    getchar();

    return 0;
}