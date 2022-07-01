#include <stdio.h>
#include <math.h>

float CircleArea(int r);
float Volume(int r, int h);

int main()
{
    float r, h;
    printf("Enter radius of circle:\n");
    scanf("%f", &r);
    printf("Enter height of circle:\n");
    scanf("%f", &h);
    float S = CircleArea(r);
    printf("The Area of the Circle is %f:\n", S);
    float _S = Volume(r, h);
    printf("The Area of the Circle is %f:\n", _S);
    return 0;
}

float CircleArea(int r)
{
    return M_PI * r * r;
}

float Volume(int r, int h)
{
    return M_PI * r * r * h;
}