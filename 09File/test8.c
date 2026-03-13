// 二进制文件/二进制流 输入输出
// fread()
#include<stdio.h>
int main(void)
{
    FILE *fp;
    unsigned char c;

    fp = fopen("output.bin", "rb"); // read binary 读取字节
    if (fp == NULL)
    {
        printf("Error open.\n");
        return 1;
    }

    while(fread(&c, sizeof(char), 1, fp) > 0)
    {
        printf("%d\n", c);
    }

    fclose(fp);
}