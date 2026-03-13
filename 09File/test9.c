// 结构体和数字
// 大小端保存
#include<stdio.h>
int main(void)
{
    FILE *fp;

    fp = fopen("test9.bin", "wb");
    if (fp == NULL)
    {
        printf("Error open.\n");
        return 1;
    }
    
    unsigned short v = 0x1234;
    fwrite(&v, sizeof(v), 1, fp);

    fclose(fp);

    return 0;
    // hexdump -C test9.bin
    // 00000000  34 12 
}