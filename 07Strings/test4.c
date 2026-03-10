#include<stdio.h>
int main(void)
{
    // 字符串初始化
    // 指针形态下字符串的存储形式远离程序其他内存的只读，不可修改
    char *s1 = "Hello, world!";
    // 数组形态下字符串是可变的复制品，在常规内存里面，可读可写
    char s2[] = "Hello, world!";
    // error
    // Segmentation fault (core dumped)
    // s1[0] = 'N';
    s2[0] = 'N';
    printf("%s\n",s2);

    return 0;
    
}