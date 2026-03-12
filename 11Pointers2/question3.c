#include<stdio.h>
int is_palindrome(char *str)
{
    char *begin = str;
    char *end = str;
    while(*end != '\0')
        end++;
    end--;

    int tag = 1;
    while(end != begin && (end + 1) != begin && tag)
    {   
        if (*end != *begin)
            tag = 0;

        end--;
        begin++;
    }

    return tag;
}
int main(void)
{
    char s[] = "hello,olleh";
    if(is_palindrome(s))
    {
        printf("Yes.\n");
    }
    else
    {
        printf("No.\n");
    }

    char s1[] = "hello, worleh";
    if(is_palindrome(s1))
    {
        printf("Yes.\n");
    }
    else
    {
        printf("No.\n");
    }

    return 0;
}