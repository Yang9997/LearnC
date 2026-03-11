#include<stdio.h>
struct car
{
    /* data */
    char *name;
    float price;
    int speed;
};
int main(void)
{
    // 复制与返回结构体
    // struct car a, b;

    // 裸大括号 {} 语法只能在变量声明诞生的那一刻使用
    // error
    // a = {
    //     .speed = 234,
    //     .price = 34.23,
    //     .name = "Toyota"
    // };

    struct car a = 
    {
        /* data */
        .speed = 23,
        .price = 32.43,
        .name = "Toyota"
    };
    struct car b;
    // 浅拷贝
    b = a;
    printf("price = %.2f\n",b.price);
    printf("speed = %d\n",b.speed);
    printf("name = %s\n",b.name);

    a.name = "OH";
    printf("price = %.2f\n",b.price);
    printf("speed = %d\n",b.speed);
    printf("name = %s\n",b.name);
}