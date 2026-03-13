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

    while((c = fgetc(fp)) != EOF)
    {
        printf("%c",c);
    }
    printf("\n");
    fclose(fp);

    return 0;
}