// fgetc() 逐字符读取
#include<stdio.h>
int main(void)
{
    FILE *fp;
    int c;
    
    fp = fopen("hello.txt", "r");
    if(fp == NULL)
    {
        printf("Error open.\n");
        return 1;
    }

    // 维护光标，是个指针，读一个字符之后自动移动一下。最后会停在EOF那里。
    while((c = fgetc(fp)) != EOF)
    {
        printf("%c",c);
    }
    printf("\n");
    fclose(fp);

    return 0;
}