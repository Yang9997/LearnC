#include<stdio.h>
struct car
{
    char *name;
    float price;
    int speed;
};

void set_price(struct car *acar, float aprice);

int main(void)
{
    // 将结构体传递给函数
    // 一般是直接传指针，但直接传结构体也不违法
    struct car mycar = 
    {
        /* data */
        .speed = 234,
        .name = "Toyota",
    };

    set_price(&mycar, 799.99);

    printf("Price: %.2f\n",mycar.price);
    
}

void set_price(struct car *acar, float aprice)
{
    acar->price = aprice;
}