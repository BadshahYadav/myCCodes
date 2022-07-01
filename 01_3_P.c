#include <stdio.h>
float CelcuisTemp(int C);
int main()
{
    float C;
    printf("Enter temperature in celuis:\n");
    scanf("%f", &C);
    float Store = CelcuisTemp(C);
    printf("The temperature in Fahrenheit :%f", Store);
    return 0;
}
float CelcuisTemp(int C)
{
    float F = C * 9 / 5 + 32;
    return F;
}