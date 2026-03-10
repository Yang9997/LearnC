#include<stdio.h>

int main(void)
{
    // 4字节，32位
    printf("an int uses %zu bytes of memory\n", sizeof(int));

    int i = 10;
    // The value of i is 10
    // And its address is 0x7ffc301855b4
    // 140TB，这是虚拟内存
    printf("The value of i is %d\n",i);
    printf("And its address is %p\n",(void *)&i);

    int j = 20;
    // *要紧靠着指针变量
    // 含义：如果对 p 进行解引用（*p），得到的数据类型是一个int
    int *p;
    // &：取地址。C语言中没有变量引用这个概念，C++才有
    p = &j;
    // p = 0x7ffdaa81851c
    printf("p = %p\n",p);
    printf("*p = %d\n",*p);
    printf("j = %d\n",j);

    return 0;
}