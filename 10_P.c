#include <stdio.h>

int writePrime(int n);

int main()
{
    int n, i;
    printf("Enter a number :\n");
    scanf("%d", &n);
    writePrime(n);
    return 0;
}

int writePrime(int n)
{
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 2; j <i; j++)
        {
            if (i % j == 0)
            {
                break;
            } 
        }
        if(j==i)
            printf("%d is prime:\n",i);
    }

    return 0;
}