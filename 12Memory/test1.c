// malloc() 和 free()
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    // 等价于：int *p = mallo(sizeof(*p));
    int *p = malloc(sizeof(int));
    *p = 12;
    printf("%d\n", *p);
    free(p);

    return 0;
}