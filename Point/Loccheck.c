/**
 * @Author: Lucifer
 * @Date: 5/5/2023, 12:11:20 AM
 * @LastEditors: Lucifer
 * @LastEditTime: 5/5/2023, 12:11:20 AM
 * Description: 指针和取址符:&
 * Copyright: Copyright (©)}) 2023 Your Name. All rights reserved.
 */
# include<stdio.h>
void mikado(int);

int main(void)
{
    int pooh = 2, bah = 5;

    printf("pooh = %d, location = %p.\n", pooh, &pooh);
    printf("bah = %d, location = %p.\n", bah, &bah);
    mikado(pooh);

    getchar();

    return 0;
}

void mikado(int bah)
{
    int pooh = 10;

    printf("pooh = %d, location = %p.\n", pooh, &pooh);
    printf("bah = %d, location = %p.\n", bah, &bah);
}