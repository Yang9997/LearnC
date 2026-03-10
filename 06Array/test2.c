#include<stdio.h>

void foo(int x[12]);

int main(void)
{
    // 2.
    // 数组长度
    int x[12];
    // 48
    printf("%zu\n", sizeof(x));
    // 4
    printf("%zu\n", sizeof(int));
    // 12
    printf("%zu\n", sizeof(x) / sizeof(int));
    // 数组传递给函数测试sizeof()，是不能用的
    foo(x);
    // 数组长度 384bits
    printf("%d\n",sizeof(double [48]));

    return 0;
}

void foo(int x[12])
{
    // warning: ‘sizeof’ on array function parameter ‘x’ will return size of ‘int *’
    // 8
    printf("%zu\n",sizeof(x));
    // 4
    printf("%zu\n",sizeof(int));
    // 2
    printf("%zu\n",sizeof(x)/sizeof(int));
}

