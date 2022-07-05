#include <stdio.h>
#include <math.h>

int prime(int n);

int main()
{
    int n;
    while (1)
    {
        printf("Enter a positive number:\n");
        scanf("%d", &n);
        prime(n);
    }
    return 0;
}

int prime(int n)
{
    int flag = 0;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            flag = 1;
            break;
        }
    }

    if (n == 0 || n == 1)
    {
        printf("%d is neither a prime not a composite no. :\n", n);
    }
    else if (flag == 0)
    {
        printf("%d is a prime number:\n", n);
    }
    else
    {
        printf("%d is not a prime number :\n", n);
    }
    return 0;
}