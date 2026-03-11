#include<stdio.h>

int my_strlen(char *s)
{
    char *p = s;
    while(*p != '\0')
    {
        p++;
    }
    return (p - s);
}
int main(void)
{
    // 指针加
    int a[5] = {1,2,3,4,5};
    int *p = a;
    
    printf("%d\n", *p);
    printf("%d\n", *(p + 1));
    printf("\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",*(p + i));
    }
    printf("\n");

    // 更改指针
    int b[] = {1,2,3,4,5,6,7,8,999};
    p = b;
    while (*p != 999)
    {
        printf("%d\n",*p);
        p++;
    }
    printf("\n");

    // 指针减法
    printf("%d\n",my_strlen("Hello, world!"));

    return 0;
}