// realloc
#include<stdio.h>
#include<stdlib.h>
int main(void)
{
    float *p = malloc(sizeof(float) * 10);
    for (int i = 0; i < 10; i++)
    {
        p[i] = i * 1.0;
    }
    int num_floats = 10;
    num_floats *= 2;
    // 数组扩容
    float *np = realloc(p, num_floats* sizeof(float));
    // 判断扩成了没
    if (np == NULL)
    {
        printf("Error reallocing.\n");
        return 1;
    }
    p = np;
    for (int i = 10; i < 20; i++)
    {
        p[i] = i * 1.0;
    }
    for (int i = 0; i < 20; i++)
    {
        printf("%.2f\n", p[i]);
    }

    return 0;
}