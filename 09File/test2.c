// 读取文本文件
// fgetc()
#include<stdio.h>
int main(void)
{
    FILE *fp;
    fp = fopen("hello.txt", "r");

    // 这里用int而不用char的原因：
    // char：0-255 
    // 255 11111111, EOF(-1) 11111111
    // int: 32位
    // 255 四组0一组1, EOF(-1) 四组1
    int c = fgetc(fp);
    printf("%c\n",c);

    fclose(fp);

    return 0;
}