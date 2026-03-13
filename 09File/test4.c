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
    
    // 获取第二个参数大小的数据或者遇到'\n'，光标都会停下，进入循环体里面的printf
    while(fgets(s, sizeof(s), fp) != NULL)
    {
        printf("%d: %s",++linecount, s);
    }
    printf("\n");

    fclose(fp);

    return 0;
}