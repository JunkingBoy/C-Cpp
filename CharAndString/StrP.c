/**
 * @Author: Lucifer
 * @Date: 5/15/2023, 10:07:13 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/15/2023, 10:07:13 PM
 * Description: 将字符串看作指针
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>

int main(void)
{
    const char m1[10] = "Hello";
    const char m2[10] = {'H', 'e', 'l', 'l', 'o', '\0'};
    /**
     * 第一种声明方式比第二种简洁,但是两种声明方式都已经在编译时声明的数组的大小
     * 第二种声明方式当中如果没有最后一位'\0'将是字符数组,不是字符串
    */
    printf("%s, %p, %c.\n", "We", "are", *"space farers");
    /**
     * %p打印的是are字符串首字符的地址
     * %c打印的是字符串"space farers"的首字符 -> 解引用,说明该字符串是地址,一个指向字符串的首字符的指针
    */

   return 0;
}