# include<stdio.h>

int main(void)
{
    int n = 0;

    while (n < 3)
        printf("Now n = %d", n);
        n++; // 只有跟在循环条件后面的一条语句是循环语句,第二句开始就不是,所以n不会递增,while的循环条件一直为true
    printf("Down!");

    return 0;    
}