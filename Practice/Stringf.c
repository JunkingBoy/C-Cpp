# include<stdio.h>
# define BLURB "Authentic imitation!"

int main(void)
{
    printf("[%2s]\n", BLURB);
    printf("[%24s]\n", BLURB);
    printf("[%24.5s]\n", BLURB); // .5告诉printf()函数只打印5个字符
    printf("[%-24.5s]\n", BLURB); // -.5告诉printf()函数右对齐打印5个字符

    getchar();

    return 0;
}