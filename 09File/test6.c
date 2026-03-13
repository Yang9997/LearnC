// 写文件
// fputc() fputs()
#include<stdio.h>
int main(void)
{
    FILE *fp;
    int x = 32;

    // 控制台输出
    // fp = stdout;
    fp = fopen("output.txt", "w");
    if (fp == NULL)
    {
        printf("Error open.\n");
        return 1;
    }
    
    fputc('B', fp);
    fputc('\n', fp);
    fprintf(fp, "x = %d\n", x);
    fputs("Hello, world!\n", fp);

    fclose(fp);

    return 0;
}