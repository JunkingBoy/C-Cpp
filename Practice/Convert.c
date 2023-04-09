# include<stdio.h>

int main(void)
{
    char ch; // 8位
    int i; // 32位
    float fl;

    fl = i = ch = 'C'; // 'C'被作为1字节的ASCII值存储在ch中,i接受'C'转换的整数,4字节存储67,fl则是接受67转换的浮点数67.00
    printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
    ch += 1; // 'C'被转换成了67,然后+1,变成68（4字节整数,被截断为1字节存储在ch中)最后根据ASCII值为'D'
    i = fl + 2 * ch; // ch->4字节整数68,68*2 = 136,转成浮点数(203.00f),转成int存储在i中
    fl = 2.0 * ch + i; // i为转成浮点数的203,ch转为整数68*2,最终的结果是203+136=339
    printf("ch = %c, i = %d, fl = %2.2f\n", ch, i, fl);
    ch = 1107; // 由于char类型是1位,1107已经超出,最终的打印的结果是1107%256=83,打印结果是83的ASCII码
    printf("Now ch = %c\n", ch);
    ch = 80.89; // 浮点数,被截断,阶段以后的值对应的ASCII码是'P'
    printf("Now ch = %c\n", ch);

    getchar();

    return 0;
}