#include<stdio.h>
int main(void)
{
    // 数组越界
    int i;
    int a[5] = {1,2,3,4,5};
    // 多出来的5个输出都是垃圾值
    // 编译器可能做任何事情：0，垃圾值，崩溃...
    for (i = 0; i < 10; i++)
    {
        printf("%d\n", a[i]);
    }

    return 0;
}