#include <stdio.h>

int Aramas(int n);

int main()
{
    int n;
    printf("Bosdike tum number dalo:\n");
    scanf("%d", &n);
    Aramas(n);
    return 0;
}

int Aramas(int n)
{
    int remainder, num, result = 0;
    num = n;
    while (num != 0)
    {
        remainder = num % 10;
        result += remainder * remainder * remainder;
        num = num / 10;
    }
    if (result == n)
    {
        printf("%d is a Armstrong Number:\n", n);
    }

    else
    {
        printf("%d is Not a Armstrong Number:\n", n);
    }
    return 0;
}