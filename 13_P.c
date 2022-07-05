#include <stdio.h>

void temp(int n);

int main()
{
    int n;
    printf("Enter temperature in celcius:\n");
    scanf("%d", &n);
    temp(n);
    return 0;
}

void temp(int n)
{
    if (n > 25)
    {
        printf("Hot\n");
    }
    else
    {
        printf("Cold\n");
    }
}