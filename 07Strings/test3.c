#include<stdio.h>
int main(void)
{
    // 字符串变量作为数组
    // 这两种形态在读取数据层面是一样的效果
    // char数组形态
    // 这里带不带数字都是一回事
    char s0[14] = "Hello, world!";
    char s1[] = "Hello, world!";

    for (int i = 0; i < 13; i++)
    {
        printf("%c",s1[i]);
    }
    printf("\n");

    // char指针形态
    char *s2 = "Hello, world!";

    for (int i = 0; i < 13; i++)
    {
        printf("%c",s2[i]);
    }
    printf("\n");
}