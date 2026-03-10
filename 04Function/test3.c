#include<stdio.h>
// void foo(); （括号为空）：
// 编译器会认为：“我不知道这个函数接受什么参数，也不知道有几个参数。”
// 这在 C 语言里的专业术语叫“未指定参数”（unspecified parameters）。编译器此时会直接放弃对参数的类型检查。你传什么进去，传多少个进去，编译器都不会拦着你。

// void foo(void); （括号里有 void）：
// 编译器会认为：“我很确定，这个函数绝对不需要任何参数（参数数量严格为 0）。”
// 此时，如果你试图在调用时塞进去任何东西，编译器会立刻报错，阻止你编译。

// void init_system();
void init_system(void);
int main()
{
    // error
    // init_system(10, "hello", 3.14);
    return 0;
}

void init_system(void)
{

}