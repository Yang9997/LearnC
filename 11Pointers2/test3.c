#include<stdio.h>
#include<string.h>
void *my_memcy(void *dest, void *src, int bye_count)
{
    char *s = src, *d = dest;
    while(bye_count--)
    {
        *d++ = *s++;
    }
    return dest;
}
int main(void)
{
    // 空指针
    char s[] = "Goats!";
    char t[100];
    memcpy(t, s, 7); // 含'\0'
    printf("%s\n",t);

    int a[] = {1,2,3};
    int b[3];
    memcpy(b, a, 3 * sizeof(int));
    printf("%d\n",b[1]);

    char c = 'x';
    void *p = &c;
    char *q = p;
    // error：不可以解引用空指针
    // printf("%c\n", *p);
    printf("%c\n", *q);
    printf("\n");

    // 一个复制的例子：
    int num1 = 90;
    int num2 = 100;
    int *pnum1 = &num1;
    int *pnum2 = &num2;
    // 90      0x7ffddd239088
    // 100     0x7ffddd23908c
    printf("%d\t%p\n",*pnum1,pnum1);
    printf("%d\t%p\n",*pnum2,pnum2);
    pnum2 = my_memcy(pnum2, pnum1, 4);
    // 90      0x7ffddd239088
    // 90      0x7ffddd23908c
    printf("%d\t%p\n",*pnum1,pnum1);
    printf("%d\t%p\n",*pnum2,pnum2);
    return 0;

}