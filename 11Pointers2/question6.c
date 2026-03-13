// 🔴 挑战 4：指向指针的指针（考察第11章终极Boss：二级指针）
// 背景： 如果你想在函数内部修改一个普通的 int 变量，你需要传 int *。
//      同理，如果你想在函数内部修改一个指针本身的指向，你需要传“指针的指针”（char **）。
// 任务： 编写一个函数 void find_first_space(char *str, char **space_ptr)。
//      它接收一个字符串 str。
//      它会寻找字符串里的第一个空格字符 ' '。
//      如果找到了，就把 space_ptr 所指向的内容，修改为指向那个空格的地址。
//          如果没找到，就设为 NULL。
#include<stdio.h>

void find_first_space(char *str, char **space_str)
{
    char *p = str;
    *space_str = NULL;
    while(*p != '\0')
    {
        if(*p == ' ')
        {
            *space_str = p;
            return ;
        }
        p++;
    }
}

int main(void)
{
    char str[] = "Hello, world!";
    char *p = NULL;
    find_first_space(str, &p);
    if(p != NULL)
        printf("p = %p, *p = %c\n", p, *p);
    return 0;
}