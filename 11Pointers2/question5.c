#include<stdio.h>

struct player
{
    char *name;
    int hp;
    int x;
    int y;
};

void move_player(struct player *p, int dx, int dy)
{
    p->x += dx;
    p->y += dy;
}

int main(void)
{
    struct player player1 =    
    {
        .name = "luhuai",
        .hp = 100,
        .x = 3,
        .y = 8,
    };
    move_player(&player1, 3, 5);
    printf("x = %d, y = %d\n",player1.x,player1.y);

    return 0;
    
}