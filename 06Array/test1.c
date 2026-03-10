#include<stdio.h>
int main(void)
{
    int i;
    float f[4];

    f[0] = 1.32414;
    f[1] = 3.14131;
    f[2] = 5.12312;
    f[3] = 9.34222;

    for (int i = 0; i < 4; i++)
    {
        printf("%f\n", f[i]);
    }
}