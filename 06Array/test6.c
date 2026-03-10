#include<stdio.h>

void times2(int *a, int len);
void times3(int a[], int len);
void times4(int a[5], int len);
void double_array(int *a, int len);
// 函数原型：二维数组作为函数参数必须带除一维外的其余维数字
// 等价于 int a[][3]
void print_2D_array(int a[2][3]);
int main(void)
{
    // 数组和指针
    int a[5] = {11,22,33,44,55};
    int *p1;
    p1 = &a[0];

    for (int i = 0; i < 5; i++)
    {
        printf("%d ",*(p1 + i));
    }
    printf("\n");

    int *p2;
    // 等同于&a[0]
    p2 = a;
    printf("%d\n",*p2);

    // 一维数组传递给函数
    int x[5] = {1,2,3,4,5};
    times2(x, 5);
    // 6
    printf("x[1] = %d\n",x[1]);
    times3(x, 5);
    // 7
    printf("x[1] = %d\n",x[1]);
    times4(x, 5);
    // 8
    printf("x[1] = %d\n",x[1]);
    // 一维数组传参时，写 [] 或 [5] 都是自欺欺人
    // 本质上都是指针 *a，编译器也不会帮助检查长度
    // 这也是为什么通常需要额外传一个len参数

    // 函数中的数组
    int y[5] = {1,2,3,4,5};
    double_array(y, 5);
    for (int i = 0; i < 5; i++)
    {
        printf("%d ",y[i]);
    }
    printf("\n");

    // 多维数组
    int yy[2][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };
    print_2D_array(yy);

    return 0;  
}

void times2(int *a, int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d\n",a[i] * 2);
    }
    a[1] = 6;
}
void times3(int a[], int len)
{
    for (int i = 0; i < len; i++)
    {
        printf("%d\n",a[i] * 3);
    }
    a[1] = 7;
}
void times4(int a[5], int len)
{
    for (int i = 0; i <len; i++)
    {
        printf("%d\n",a[i] * 4);
    }
    a[1] = 8;
}
void double_array(int *a, int len)
{
    for (int i = 0; i < len; i++)
    {
        a[i] *= 2;
    }
}
void print_2D_array(int a[2][3])
{
    for (int row = 0; row < 2; row++)
    {
        for (int col = 0; col < 3; col ++)
        {
            prinf("%d\t",a[row][col]);
        }
        printf("\n");
    }
}