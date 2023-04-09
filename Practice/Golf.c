# include<stdio.h>

int main(void)
{
    int jane, tarzan, cheeta;

    cheeta = tarzan = jane = 68; // 三重赋值 ---> 可修改左值 = 赋值数

    printf("cheeta   tarrzan   jane\n");
    printf("%4d %8d %8d\n", cheeta, tarzan, jane);

    getchar();

    return 0;
}