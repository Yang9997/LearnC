// calloc
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main(void)
{
    // 两个参数，专为数组设计；自动初始化全0
    // 下一行等于后两行
    int *p = calloc(10, sizeof(int));
    int *q = malloc(sizeof(int) * 10);
    memset(q, 0, 10 * sizeof(int));

    for (int i = 0; i < 10 ; i++)
    {
        printf("%d %d\n",p[i], q[i]);
    }

    return 0;
}