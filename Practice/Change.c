# include<stdio.h>

/* 厘米和英尺的转换 */
int main(void)
{
    int feet, fathooms; // 声明多个变量，且类型相同
    fathooms = 10;

    feet = fathooms * 6;

    printf("转换完成后的厘米数是:%d", feet);

    getchar();

    return 0;
}