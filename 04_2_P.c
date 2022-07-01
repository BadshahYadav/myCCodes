#include <stdio.h>
void ReverseTable(int num);
int main()
{
    int num;
    printf("Enter the Table's Number:\n");
    scanf("%d", &num);
    ReverseTable(num);
    return 0;
}
void ReverseTable(int num)
{
    for (int i = 10; i >= 1; i--)
    {
        printf("%d\n", num * i);
    }
}