    # include<stdio.h>
    # include<string.h> /* 字符串函数原型 */
    void fit(char *string, unsigned int size);

    int main(void)
    {
        char mesg [] = "Things should be as simple as possible,"
                        "but not simpler.";
        puts(mesg);
        fit(mesg, 38); // 38位字符位置处截断
        puts(mesg);
        puts("Let's look at some more of the string.");
        puts(mesg + 39); // mesg + 39位置处字符开始往后输出

        getchar();

        return 0;
    }

    void fit(char *string, unsigned int size)
    {
        /**
         * 本质上就是处理字符数组
         * 字符数组与字符串的区别在于字符串的字符数组最后一位是空字符串 -> '\0'
         * 字符数组使用数组名称作为指向数组第一个元素的指针 -> 头指针
        */
    if (strlen(string) > size)
        string[size] = '\0';
    }