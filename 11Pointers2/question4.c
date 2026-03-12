// 🟡 附加题 B：自己动手写 strcat (字符串拼接)
// 背景： C 语言标准库里有个函数叫 strcat(dest, src)，
//      它的作用是把 src 字符串拼接到 dest 字符串的末尾。
//      今天我们要自己实现它！
// 任务： 编写一个函数 void my_strcat(char *dest, char *src)。
// 举例：
// char s1[50] = "Hello, "; // 必须保证容量足够大！
// char s2[] = "world!";
// my_strcat(s1, s2);
// // 此时 s1 应该变成 "Hello, world!"
// 提示： 这道题需要用到两个阶段：
// 寻找终点： 先用一个指针在 dest 里一直往后走，直到找到它的结束符 \0。
// 开始搬运： 把 src 里的字符，挨个赋值到 dest 的末尾，
//           两个指针同时往后走（*dest = *src）。
// 安全封口： 千万别忘了在拼接完之后，手动给 dest 的最后加上一个 \0 封口！
#include<stdio.h>
void my_strcat(char *dest, char *src)
{
    char *now = dest;
    char *start = src;
    
    while(*now != '\0')
    {
        now++;
    }

    while(*start != '\0')
    {
        *now = *start;
        now++;
        start++;
    }
    *now = '\0';
}

int main(void)
{
    char s1[50] = "Hello, ";
    char s2[] = "world!";
    printf("%s\n",s1);
    my_strcat(s1, s2);

    printf("%s\n",s1);

    return 0;
}