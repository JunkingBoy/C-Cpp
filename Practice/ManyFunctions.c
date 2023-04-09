# include<stdio.h>
void butler(void); // 函数原型，告诉编译器在这个文件当中要用到这个函数

int main(void)
{
    printf("巴特勒函数在下面!\n");
    butler(); // 调用函数butler
    printf("上面调用的巴特勒函数!\n");

    getchar();

    return 0;
}

/* 定义函数butler */
void butler(void)
{
    printf("巴特勒!!!\n");
}