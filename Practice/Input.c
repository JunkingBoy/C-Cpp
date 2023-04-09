# include<stdio.h>

int main(void)
{
    int age;
    float assets;
    char pet[30];

    printf("请输入你的年龄、资产:\n");
    scanf("%d %f", &age, &assets);
    getchar();
    printf("请输入最喜欢的宠物:\n");
    scanf("%s", pet);
    getchar();

    printf("您的年龄是: %d, 您的资产是：$%.2f, 您最喜欢的宠物是: %s\n", age, assets, pet);

    getchar();

    return 0;
}