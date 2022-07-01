#include <stdio.h>

int Sum(int num);

int main()
{
    int num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    Sum(num);
    return 0;
}

int Sum(int num)
{
    int sum = 0;
    // for (int i = 1; i <= num; i++)
    // {
    //     sum = sum + i;
    // }

    while(num!=0)
    {
        sum = sum + num;
        num--;
    }
    printf("%d", sum); 
    return 0;
}