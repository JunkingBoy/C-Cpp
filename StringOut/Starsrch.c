# include<stdio.h>
# include<string.h>
# define LISTSIZE 6

int main(void)
{
    const char * list[LISTSIZE] = 
    {
        "astronomy", "astounding", "astrophtsics", "ostracize", "asterism", "astrophobia"
    };

    int count = 0;
    int i;

    for ( i = 0; i < LISTSIZE; i++)
    {
        if (strncmp(list[i], "astro", 5) == 0) // 只查找前五个字符相同的字符串
        {
            printf("Found: %s \n", list[i]);
            count++;
        }  
    }

    printf("The list contained %d words begining with astro.\n", count);
    
    getchar();

    return 0;

}