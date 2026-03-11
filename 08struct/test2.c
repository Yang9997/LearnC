#include<stdio.h>
struct car {
    char *name;
    float price;
    int speed;
};
int main(void)
{
    // 结构体初始化
    struct car mycar = 
    {
        "Toyota",
        2432.343,
        1234
    };
    
    printf("Name: %s\n",mycar.name);
    printf("Price: %f\n",mycar.price);
    printf("Speed: %d\n",mycar.speed);

    // 顺序
    struct car yourcar = 
    {
        /* data */
        .speed = 213,
        .price = 213.324
    };
    // 没初始化：string为NULL，数字的话是0
    printf("name: %s\n",yourcar.name);
    printf("price: %f\n",yourcar.price);
    printf("speed: %d\n",yourcar.speed);
    

    return 0;   
}