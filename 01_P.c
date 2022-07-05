#include <stdio.h>
int Parameter(int a, int b);
int main()
{
    int a, b;
    printf("Enter the value of a & b\n");
    scanf("%d %d", &a, &b);
    int S = Parameter(a, b);
    printf("The Parameter is :%d", S);
    return 0;
}

int Parameter(int a, int b)
{
    return 2 * (a + b);
}