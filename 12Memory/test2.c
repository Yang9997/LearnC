// 错误检查
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    int *x;
    x = malloc(sizeof(int));
    // linux系统下配置malloc即使是内存不足也不会返回NULL
    // 试了一下，常规情况下window malloc也不会返回NULL
    if(x == NULL)
    {
        printf("Error allocating 10 ints.\n");
    }

    int *y;
    // 赋值和条件在同一行
    if((y = malloc(sizeof(int) * 10)) == NULL)
    {
        printf("Error allocating 10 ints.\n");
    }
    return 0;
}