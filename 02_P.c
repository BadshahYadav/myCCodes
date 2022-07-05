#include <stdio.h>
#include <math.h>

int Cube(int n);

int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    int S = Cube(n);
    printf("The cube of the number is: %d", S);

    return 0;
}

int Cube(int n)
{
    return pow(n, 3);
}