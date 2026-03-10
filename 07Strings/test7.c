#include<stdio.h>
#include<string.h>
int main(void)
{
    // 字符串复制

    // 一个字符串副本
    char s[] = "Hello, world!";
    char *t;
    printf("%s\n%p\n", s, s);
    printf("\n");
    // 指针复制，不是字符串复制。
    // t指向同样的字符串副本，此时可通过t修改字符串副本单个字母
    t = s;

    t[0] = 'z';
    printf("%s\n%p\n", t, t);
    printf("%s\n%p\n", s, s);
    printf("\n");

    // 真正的字符串复制
    char s1[] = "Hello, world!";
    char t1[100];
    
    // strcpy(destination, source)
    strcpy(t1, s1);

    t1[0] = 'z';

    printf("%s\n",s1);
    printf("%s\n",t1);
    printf("\n");

    char t2[4];
    strcpy(t2, s1);
    printf("%s\n",t2);

    return 0;
}