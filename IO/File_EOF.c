/**
 * @Author: Lucifer
 * @Date: 5/1/2023, 12:20:08 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/1/2023, 12:20:08 PM
 * Description: 打开一个文件,并显示该文件
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
# include<stdlib.h> // 为了使用exit()

int main(void)
{
    int ch;
    FILE * fp; // iobuffer类型,定义在stdio.h宏文件中
    char fName[50]; // 存储文件名

    printf("输入文件名:");
    scanf("%s", fName);
    fp = fopen(fName, "r"); // 打开待读取文件
    if (fp == NULL)
    {
        printf("文件不存在!");
        exit(1);
    }

    while ((ch = getc(fp)) != EOF) // getc()方法必须要传一个iobuffer类型的参数 ---> getchar()无形参
        putchar(ch);
    fclose(fp); // 关闭文件
    
    return 0;
}