#include<stdio.h>
#include<string.h>
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


    return 0;

}