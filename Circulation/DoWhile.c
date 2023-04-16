/**
 * @Author: Lucifer
 * @Date: 4/16/2023, 7:47:13 PM
 * @LastEditors: Lucifer
 * @LastEditTime: 4/16/2023, 7:47:13 PM
 * Description: 猜数字游戏
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>

int main(void)
{
    const int secret_code = 13;
    int code_entered;

    do
    {
        printf("有一个内置的数,在10到20之间,猜猜是几?:\n");
        printf("请输入你猜的数:\n");
        scanf("%d", &code_entered);
        getchar();
    } while (code_entered != secret_code);

    printf("猜对了,游戏结束!");

    getchar();

    return 0;
}