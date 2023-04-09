# include<stdio.h>

int main(void)
{
    float weight; // 体重
    float value; // 等体重白金价值

    printf("请输入你的体重:\n");
    /* 调用scanf()函数处理用户输入的数据 */
    scanf("%f", &weight); // 占位符%f表示读取用户从键盘输入的浮点数，&表示寻找变量的地址
    getchar(); // 读取换行符
    value = 1700.0 * weight * 14.5833;

    printf("体总换算出来的白金价值是:$%.2f\n", value); // %.2f表示输出小数点后两位数

    getchar(); // 退出程序

    return 0;
}