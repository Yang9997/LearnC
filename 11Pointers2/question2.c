// 🟡 挑战 2：原地反转字符串（考察字符串与双指针）
// 背景： 字符串在 C 里就是以 \0 结尾的字符数组。
// 任务： 编写一个函数 void reverse_string(char *str)。
//     它接收一个字符串，并原地将它反转（不能创建新的数组）。
// 提示：你可以用两个指针，一个指向开头，一个指向结尾，
//     然后不断交换它们指向的字符，直到两个指针相遇。
#include<stdio.h>
void reverse_string(char *str)
{
    char *begin = str;
    char *end = str;
    while(*end != '\0')
    {
        end++;
    }
    end--;

    // 存临时变量
    char c;
    // 等价于：while(begin < end)
    while(begin != end && (end + 1) != begin)
    {
        // 将当前begin指向的字符存入临时变量
        c = *begin;
        // 将end指向的字符存入begin指向的空间
        *begin = *end;
        // 将临时变量存入end指向的空间
        *end = c;

        begin++;
        end--;
    } 
    
}
int main(void)
{
    char s[] = "Hello, world!";
    printf("%s\n",s);
    reverse_string(s);
    printf("%s\n",s);

    return 0;
}