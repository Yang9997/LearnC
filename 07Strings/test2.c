#include<stdio.h>
int main(void)
{
    // 字符串变量
    // 每个字符串结尾都有个看不见的'\0'，是printf停下来的标志
    char *s = "Hello, world!";
    printf("%s\n", s);
    // 上面那句能自动打印完整字符串而不溢出是因为printf遇到'\0'会自动停下
    
    // warning: embedded ‘\0’ in format
    // Yang9997 is handsome.
    printf("Yang9997 is handsome.\0 But...");

    return 0;
}