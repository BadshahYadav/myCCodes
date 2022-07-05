#include <stdio.h>
int sum_of_digit(int n);

int main()
{
    int n;
    printf("Enter a number:\n");
    scanf("%d", &n);
    int store = sum_of_digit(n);
    printf("The sum of digits of number is %d:",store);
    return 0;
}
int sum_of_digit(int n)
{
    int sum = 0;
    while (n > 0)
    {
        int s = n % 10;
        sum = sum + s;
        n = n / 10;
    }
   return sum;
}
