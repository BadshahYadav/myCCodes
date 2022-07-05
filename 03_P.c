#include <stdio.h>
float avg(float a, float b, float c);

int main()
{
    float a, b, c;
    printf("Enter three numbers\n");
    scanf("%f %f %f", &a, &b, &c);
    float S = avg(a, b, c);
    printf("The average of three is :%.2f", S);
    return 0;
}

float avg(float a, float b, float c)
{
    // float average = (a + b + c) / 3;
    return (a + b + c) / 3;
}