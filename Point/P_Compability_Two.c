/**
 * @Author: Lucifer
 * @Date: 5/14/2023, 9:11:06 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/14/2023, 9:11:06 PM
 * Description: 指针的兼容性,二级指针当中通过修改一级指针达到间接修改其一级指针所指向的值
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>

int main(void)
{
    const int ** p2;
    int * p1;
    const int n = 13;

    p2 = &p1; // 允许,但是p2的const限定符会失效
    *p2 = &n; // 在cpp当中就是这样赋值的,const限定符修饰的指针才能被const限定符修饰的变量赋值
    *p1 = 10; // 允许,但是在部分编译器中会导致**p2的值不一致,因为在上诉当中*p2已经指向了n,在这里对一级解引用又进行了修改

    return 0;
}