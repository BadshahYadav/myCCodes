#include <stdio.h>

int Pow(int n, int r);

int main()
{
    int n, r;
    printf("Enter a number :\n");
    scanf("%d", &n);
    printf("How much power you want to calculate :\n");
    scanf("%d", &r);
    int store = Pow(n, r);
    printf("%d", store);
    return 0;
}

int Pow(int n, int r)
{
    int result = n;
    for (int i = 1; i < r; i++)
    {
        result *= n;
    }
    return result;
}