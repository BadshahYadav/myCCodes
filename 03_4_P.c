#include <stdio.h>

void LeapYear(int year);

int main()
{
    int year;
    printf("Enter a Year:\n");
    scanf("%d", &year);
    LeapYear(year);
    return 0;
}

void LeapYear(int year)
{
    if (year % 400 == 0)
    {
        printf("%d year is Leap Year:\n", year);
    }
    else if (year % 100 == 0 && year % 400 != 0)
    {
        printf("%d year is Not a Leap Year:\n", year);
    }
    else if (year % 4 == 0)
    {
        printf("%d year is  a Leap Year:\n", year);
    }
    else
    {
        printf("%d year is Not a Leap Year:\n", year);
    }
}