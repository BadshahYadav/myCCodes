#include <stdio.h>

int compare(int a, int b, int c);

int main()
{
    int a, b, c;
    printf("Enter three number:\n");
    scanf("%d %d %d", &a, &b, &c);
    compare(a, b, c);

    return 0;
}

int compare(int a, int b, int c)
{
    if (a < b && b < c)
    {
        printf("smallest number is :%d", a);
    }
    else if (a > b && b > c)
    {
        printf("smallest number is :%d", c);
    }
    else if (a > c && c > b)
    {
        printf("smallest number is :%d", b);
    }
    return 0;
}