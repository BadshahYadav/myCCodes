#include <stdio.h>

void mulTable(int num);

int main()
{
    int num;
    printf("Enter the table's number :\n");
    scanf("%d", &num);
    mulTable(num);
    return 0;
}

void mulTable(int num)
{
    for (int i = 1; i <= 10; i++)
    {
        printf("%d\n", num * i);
    }
}
