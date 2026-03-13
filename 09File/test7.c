// 二进制文件/二进制流 输入输出
// fwrite()
#include<stdio.h>
int main(void)
{
    FILE *fp;
    unsigned char bytes[6] = {3,5,76,2,7,255};
    
    fp = fopen("output.bin", "wb");
    if (fp == NULL)
    {
        printf("Error open.\n");
        return 1;
    }

    // 参数说明： 
    // 将抄来的数据写进文件：从哪里抄，每块数据多大，一次多少块，写到哪里
    // 返回值：
    // 成功：返回第三个参数，表示块数都存进去了
    // 失败：成功写了n块数据之后出错，返回n
    fwrite(bytes, sizeof(char), 6, fp);

    fclose(fp);

    return 0;

    // 很多Unix系统自带16进制转储程序能运行.bin文件
    // hexdump -C output.bin
}