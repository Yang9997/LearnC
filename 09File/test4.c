// fgets() 逐行读取
#include<stdio.h>
int main(void)
{
    FILE *fp;
    char s[1024]; // 足够大，比任何一行都大
    int linecount = 0;

    fp = fopen("quote.txt", "r");
    if(fp == NULL)
    {
        printf("Error open.\n");
        return 1;
    }
    
    while(fgets(s, sizeof(s), fp) != NULL)
    {
        printf("%d: %s",++linecount, s);
    }
    printf("\n");

    fclose(fp);

    return 0;
}