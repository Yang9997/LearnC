#include<stdio.h>
int main(void)
{
    // 多维数组
    int a[10];
    int b[2][7];
    int c[4][5][6];

    int row, col;
    // 这里不能用啊a表示int数组
    // 否则会被首次出现的int a数组覆盖，在上面
    int aa[2][5] = {
        {0,1,2,3,4},
        {5,6,7,8,9}
    };

    for (row = 0; row < 2; row++)
    {
        for (col = 0; col < 5; col++)
        {
            printf("(%d, %d) = %d\n",row, col, aa[row][col]);
        }
    }

    // 显式索引初始化
    int bb[3][3] = {[0][0]=1, [1][1]=1, [2][2]=1};
    for (row = 0; row < 3; row++)
    {
        for (col = 0; col < 3; col++)
        {
            printf("%d\t", bb[row][col]);
        }
        printf("\n");
    }
    return 0;
}