#include<stdio.h>
#include<string.h>

int main(void)
{
    // 字符串长度
    char *s = "Hello, world!";

    // 13，strlen不算'\0'占位符，只计算能看到的部分
    printf("The string is %zu bytes long.\n",strlen(s));

    return 0;
}