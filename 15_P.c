#include <stdio.h>

void max(int n, int r);

int main()
{
    int n, r;
    printf("Enter two number:\n");
    scanf("%d %d", &n, &r);
    max(n, r);
    return 0;
}

void max(int n, int r)
{
    int *p = &n;
    int *q = &r;
    if (*p < *q)
    {
        printf("%d is maximum", *q);
    }
    else
    {
        printf("%d is maximum", *p);
    }
}