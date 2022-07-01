#include <stdio.h>

void Divisible(int n);

int main()
{
    int n;
    printf("Enter a number :\n");
    scanf("%d", &n);
    Divisible(n);
    return 0;
}

void Divisible(int n)
{
    if (n % 97 == 0)
    {
        printf("%d is divisible by 97:\n", n);
    }
    else
    {
        printf("%d is not divisible by 97:\n", n);
    }
}