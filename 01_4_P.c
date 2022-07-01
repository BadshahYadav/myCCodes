#include <stdio.h>
float SimpleInterest(float P, float R, float T);

int main()
{
    float P, R, T, SI;
    printf("Enter the value of Principle Amount:\n");
    scanf("%f", &P);

    printf("Enter the Rate of interest:\n");
    scanf("%f", &R);

    printf("Enter the time Period:\n");
    scanf("%f", &T);
    float Store = SimpleInterest(P, R, T);
    printf("The SimpleInterest is :%f", Store);
    return 0;
}

float SimpleInterest(float P, float R, float T)
{
    return P * R * T / 100;
}