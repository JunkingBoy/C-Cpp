# include<stdio.h>
# define SQUARES 64 // 棋盘中的方格数目

int main(void)
{
    const double CROP = 2E16; // 当时世界小麦年产谷粒数
    double current, total;
    int count = 1;

    printf("square    grains        total      ");
    printf("fraction of \n");
    printf("世界总产量\n");
    total = current = 1.0;

    printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);

    while (count < SQUARES)
    {
        count += 1;
        current *= 2;
        total = total + current;
        printf("%4d %13.2e %12.2e %12.2e\n", count, current, total, total/CROP);
    }

    printf("这就全部的谷子数!\n");

    getchar();

    return 0;
}