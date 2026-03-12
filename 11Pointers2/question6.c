#include<stdio.h>

void find_first_space(char *str, char **space_str)
{
    char *p = str;
    *space_str = NULL;
    while(*p != '\0')
    {
        if(*p == ' ')
        {
            *space_str = p;
            return ;
        }
        p++;
    }
}

int main(void)
{
    char str[] = "Hello, world!";
    char *p = NULL;
    find_first_space(str, &p);
    if(p != NULL)
        printf("p = %p, *p = %c\n", p, *p);
    return 0;
}