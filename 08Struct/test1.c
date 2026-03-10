#include<stdio.h>

struct car
{
    char *name;
    float price;
    int speed;
};

int main(void)
{
    struct car mycar;
    mycar.name = "Toyota";
    mycar.price = 1231.4242;
    mycar.speed = 145;
}