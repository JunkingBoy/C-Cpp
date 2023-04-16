# include<stdio.h>
# define SEC_PER_MIN 60

int main(void)
{
    int sec, min, left;
    sec = -1;

    printf("输入你想要转变成时间的秒数:\n");

    do
    {
        scanf("%d", &sec);
        if (sec < 0)
        {
            printf("输入有误,请重新输入!\n");
        }else if (sec == 0)
        {
            break;
        }else {
            min = sec / SEC_PER_MIN;
            left = sec % SEC_PER_MIN;
            printf("输入的秒数转化成分钟数以后是: %d 分钟, %d 秒!\n", min, left);
            printf("输入下一个想转化的秒数: \n");
        }
        sec = -1;
    } while (sec < 0);
    
    printf("结束!");

    return 0;
}