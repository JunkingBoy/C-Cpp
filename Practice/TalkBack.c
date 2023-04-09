# include<stdio.h>
# include<string.h> // 提供strlen()函数
# define DENSITY 62.4 // 人体密度(单位:磅/立方英尺)

int main(void)
{
    float weight, volume;
    int size, letters;
    char name[40]; // 容纳40个字符的数组 ---> 该数组有40个连续的字节，每个字节存储一个字符
    // 40个存储单元字符数组，对于字符串而言只能存储39个字符，最后一个要留给\0

    printf("输入你的姓:\n");
    scanf("%s", name); // string的占位符, 由于name是字符数组不是变量，所以不需要取址符号
    getchar();
    printf("%s先生,请输入您的体重:\n", name);
    scanf("%f", &weight);
    getchar();
    size = sizeof(name);
    letters = strlen(name);
    volume = weight / DENSITY;

    printf("%s先生,您的体积是:%2.2f.\n", name, volume);
    printf("您的姓式有%d个字母\n", letters);
    printf("您的姓式占据了%d字节的空间\n", size);

    getchar();

    return 0;
}