# include<stdio.h>

int main(void)
{
    long num; long sum = 0L; int status;

    printf("请输入一个整型整数进行求和");
    printf("(q 或者 quit 退出):");
    status = scanf("%ld", &num); // scanf()函数特性,如果scanf()函数接收到一个整数,会把该整数存入num当中,并且返回一个1赋值给status
    while (status == 1)
    {
        sum = sum + num;
        printf("请输入一个整型整数进行求和 (q 或者 quit 退出):");
        status = scanf("%ld", &num); // 如果用户输入的不是数字,scanf()函数读取失败,返回0,程序退出--->利用的scanf()的双重特性避免了循环过程中的程序交互输入问题
    }
    printf("这些整型整数的和是:%ld\n", sum);

    getchar();

    return 0;
}