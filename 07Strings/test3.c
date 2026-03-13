#include<stdio.h>
#include<string.h>
int main(void)
{
    // 字符串变量作为数组
    // 这两种形态在读取数据层面是一样的效果
    // char数组形态
    char s0[14] = "Hello, world!";
    char s1[] = "Hello, world!";
    char s2[20] = "Hello, world!";
    // len = 13, size = 14
    // len = 13, size = 14
    // len = 13, size = 20
    printf("len = %ld, size = %zu\n",strlen(s0), sizeof(s0));
    printf("len = %ld, size = %zu\n",strlen(s1), sizeof(s1));
    printf("len = %ld, size = %zu\n\n",strlen(s2), sizeof(s2));

    for (int i = 0; i < 13; i++)
    {
        printf("%c",s1[i]);
    }
    printf("\n");

    // char指针形态
    char *s3 = "Hello, world!";

    for (int i = 0; i < 13; i++)
    {
        printf("%c",s3[i]);
    }
    printf("\n");
}