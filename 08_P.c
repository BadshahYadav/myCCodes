#include <stdio.h>

void PrintPattern(int n);

int main()
{
    int n;
    printf("Enter a number :\n");
    scanf("%d", &n);
    PrintPattern(n);
    return 0;
}

void PrintPattern(int n)
{
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= n; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}