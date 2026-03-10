#include<stdio.h>
void increment(int *p)
{
    *p = *p + 1;
}

int main(void)
{
    int i = 10;
    int *j = &i;

    printf("i is %d\n", i);
    printf("i is also %d\n", *j);

    increment(&i);
    // 一个意思，因为j = &i
    // increment(j);

    printf("i is %d\n", i);

    return 0;
}