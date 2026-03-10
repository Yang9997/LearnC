#include<stdio.h>
int main(void)
{
    int i = 10;
    int *p = &i;
    printf("i = %d\n",*p);
    printf("i = %d\n",i);

    return 0;
}