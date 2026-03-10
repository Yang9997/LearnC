#include<stdio.h>

#define COUNT 5

int main(void)
{
    // 数组初始化
    int a[5] = {12,23,45,278,6};

    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",a[i]);
    }
    // 最好别有有超过数字长度的变量，否则不稳定
    // warning: excess elements in array initializer
    int b[5] = {1,2,3,4,5,6};
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",b[i]);
    }
    // 可以短，后面自动全0
    int c[5] = {1,2,3};
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",c[i]);
    }
    // 想初始化全0可以将第一个数字置为0
    int e[5] = {0};
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",e[i]);
    }
    // 不初始化的数组里面都是垃圾值，别这么做
    int d[5];
    for (int i = 0; i < 5; i++)
    {
        printf("%d\n",d[i]);
    }
    // 可以给特定位置数字赋值
    int g[8] = {0,1,2,3,[5] = 5,[7] = 7};
    for (int i = 0; i < 8; i++)
    {
        printf("%d\n",g[i]);
    }
    // 可以带表达式
    int h[COUNT] = {[COUNT - 3] = 3,2,1};
    for (int i = 0; i < COUNT; i++)
    {
        printf("%d\n",h[i]);
    }
    // 自动判断长度
    // 3
    int k[] = {1,2,3};

    return 0;
}