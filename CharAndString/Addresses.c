/**
 * @Author: Lucifer
 * @Date: 5/15/2023, 10:57:25 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/15/2023, 10:57:25 PM
 * Description: 通过指针和字符的位置观察指针在字符中的实际情况,观察数组声明和指针声明的不同
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
# define MSG "Hello"
void dangerous(void);

int main(void)
{
    char ar[] = MSG;
    const char * p = MSG;

    printf("\"Hello\" 的地址是: %p.\n", "Hello");
    printf("ar的地址是: %p.\n", ar);
    printf("p的地址是: %p.\n", p);
    printf("MSG的地址是: %p.\n", p);
    printf("\"Hello\"的地址是: %p.\n", "Hello");
    /**
     * 可以看到输出1、3、4、5的地址都是相同的,说明这些值的指针一致
     * 输出2地址不相同,说明经过了拷贝的过程,和上面的描述一致
    */

    getchar();

    return 0;
}

void dangerous(void)
{
    char * p = "Klingon";
    p[0] = 'F';
    printf("Klingon");
    printf(":结果 %s!.\n", "Klingon");
}