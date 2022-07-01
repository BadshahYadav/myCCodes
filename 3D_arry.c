#include <stdio.h>

int main()
{
    int arr[5][7][9];
    int i, j, k;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 7; j++)
        {
            for (k = 0; k < 9; k++)
            {
                // printf("The address of arr[%d][%d][%d] is %u\n",i,j,k,&arr[i][j][k]);
                printf("%u\n",&arr[i][j][k]);
            }
        }
    }
    return 0;
}