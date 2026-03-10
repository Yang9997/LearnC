#include<stdio.h>
int main(void)
{
    int *p = NULL;
    // 4
    printf("%zu\n",sizeof(int));
    // 8
    printf("%zu\n",sizeof(p));
    // 4
    printf("%zu\n",sizeof(*p));

    return 0;
}