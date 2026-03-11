#include<stdio.h>

struct car
{
    char *name;
    float price;
    int speed;
};

int main(void)
{
    // 结构体声明
    struct car mycar;
    // 结构体初始化
    mycar.name = "Toyota";
    mycar.price = 1231.4242;
    mycar.speed = 145;
    printf("Name: %s\n",mycar.name);
    printf("Price: %f\n",mycar.price);
    printf("Top speed: %d\n",mycar.speed);
}