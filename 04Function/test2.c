#include<stdio.h>
int foo(void);

int main(void)
{
    int i;

    i = foo();

    printf("%d\n", i);

    return 0;
}

int foo(void)
{
    return 3490;
}