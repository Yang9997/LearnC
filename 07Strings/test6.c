#include<stdio.h>
int my_strlen(char *s)
{
    int count = 0;
    while(s[count] != '\0')
    {
        count++;
    }

    return count;
}

int main(void)
{
    // 字符串终止
    char *s = "Hello, world!";
    printf("the length of s is: %d\n",my_strlen(s));

    return 0;
}