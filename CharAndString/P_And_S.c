/**
 * @Author: Lucifer
 * @Date: 5/16/2023, 9:40:55 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/16/2023, 9:40:55 PM
 * Description: 指针赋值是地址的拷贝,不会重新声明一个内存空间重新存储字符串
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>

int main(void)
{
    const char * mesg = "Don't be a fool";
    const char * copy;

    copy = mesg;

    printf("mesg = %s, &mesg = %p, value = %p.\n", mesg, &mesg, mesg);
    printf("copy = %s, &copy = %p, value = %p.\n", copy, &copy, copy);
    /**
     * 指针copy和指针mesg是两个内存地址
     * 但是copy和mesg指向同一个内存地址,值相同
    */

    getchar();

    return 0;
}