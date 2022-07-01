#include <stdio.h>
int RectangleArea(int a, int b);
int main()
{
    int a, b;
    printf("Enter sides of rectagle:\n");
    scanf("%d %d", &a, &b);
    int store = RectangleArea(a, b);
    printf("The area of reactangle is :%d\n", store);
    return 0;
}
int RectangleArea(int a, int b)
{
    return a * b;
}