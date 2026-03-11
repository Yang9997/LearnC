#include<stdio.h>

// 下面两行等价
// int my_strlen(char *c)
int my_strlen(char c[])
{
    char *p = c;
    while(*p != '\0')
    {
        p++;
    }

    return (p - c);
}

int main(void)
{
    // 指针数组等价
    // 指针数等价公式：a[b] == *(a + b)
    int a[] = {1,2,3,4,5};
    int *p = a;

    for(int i = 0; i < 5; i++)
    {
        printf("%d\n",a[i]);
    }
    printf("\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d\n",p[i]);
    }
    printf("\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d\n",*(a + i));
    }
    printf("\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", *(p + i));
    }
    printf("\n");

    for(int i = 0; i < 5; i++)
    {
        printf("%d\n", *(p++));
        // error：该数组不能这样移动
        // printf("%d\n", *(a++));
    }
    printf("\n");

    // 函数调用：利用指针和数组的等价性
    char s[] = "Hello!";
    char *t = "OHHH!";
    printf("%d\n", my_strlen(s));
    printf("%d\n", my_strlen(t));
    return 0;
}