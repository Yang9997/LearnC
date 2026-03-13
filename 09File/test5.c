// fscanf() 格式化输入
#include<stdio.h>
int main(void)
{
    FILE *fp;
    char name[1024];
    float length;
    int mass;

    fp = fopen("whales.txt", "r");

    if(fp == NULL)
    {
        printf("Error open.\n");
        return 1;
    }

    while(fscanf(fp, "%s %f %d", name, &length, &mass) != EOF)
    {
        printf("%s whale, %d tonnes, %.1f meters.\n", name, mass, length);
    }

    fclose(fp);
}