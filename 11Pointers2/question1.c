// 🟢 挑战 1：只用指针走路（考察数组与指针算术）
// 背景： 在 C 语言中，arr[i] 实际上只是 *(arr + i) 的语法糖。
// 任务： 编写一个函数 int sum_array(int *arr, int length)。
// 要求：在这个函数内部，绝对不能使用中括号 []。
//     你只能通过指针算术（比如 arr++ 或 *arr）来遍历数组并计算所有元素的总和。
#include<stdio.h>
int sum_array(int *arr, int length)
{
    int sum = 0;
    for(int i = 0; i < length; i++)
    {
        sum += *(arr + i);
    }

    return sum;
}
int main(void)
{
    int a[10] = {1,2,3,4,5,6,7,8,9,10};
    printf("the sum is %d.\n",sum_array(a, 10));

    return 0;
}