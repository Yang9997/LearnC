#include<stdio.h>
int main(void)
{
    // p不指向任何东西，不能对其解引用赋值
    int *p = NULL;
    // p = (nil)
    printf("p = %p\n",p);
    // error: Segmentation fault (core dumped)
    // *p = 10;

    int i = 20;
    p = &i;
    printf("p = %p\n",p);
    printf("i = %d\n",*p);
    return 0;
}