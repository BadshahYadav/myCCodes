#include <stdio.h>
float IncomeTax(float salary);

int main()
{
    int salary;
    printf("Enter your salary:\n");
    scanf("%d", &salary);
    IncomeTax(salary);
    return 0;
}

float IncomeTax(float salary)
{
    if (salary < 250000)
    {
        printf("You have to pay NO any Tax:\n");
    }

    else if (salary > 250000 && salary <= 500000)
    {
        printf("You have to pay %f Tax", salary * 0.05);
    }

    else if (salary > 500000 && salary <= 1000000)
    {
        printf("You have to pay %f Tax", salary * 0.2);
    }

    else if (salary > 1000000)
    {
        printf("You have to pay %f Tax", salary * 0.3);
    }
    return 0;
}