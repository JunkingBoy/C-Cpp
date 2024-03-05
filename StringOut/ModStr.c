#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LIMIT 81
void ToUpper(char *);
int PunctCount(const char *);

int main()
{
    char line[LIMIT];
    char * find;

    puts("Please enter a line:\n");
    fgets(line, LIMIT, stdin);
    // 查找换行符
    find = strchr(line, '\n');
    if (find) // if (find != NULL)
        *find = '\n';

    ToUpper(line);
    puts(line);
    printf("该行有 %d punctuation characters.\n", PunctCount(line));
    
    getchar();
    return 0;
}

void ToUpper(char * str)
{
    // 循环依次将字符变大写
    while (*str)
    {
        *str = toupper(*str);
        str++;
    }
}

int PunctCount(const char * str)
{
    // 计数
    int count = 0;
    while (*str)
    {
        if (ispunct(*str))
            count++;
        str++;
    }

    return count;
}