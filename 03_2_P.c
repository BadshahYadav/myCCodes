#include <stdio.h>

float Result(int phy, int chem, int math);

int main()
{
    int phy, chem, math;
    printf("Enter your phy marks:\n");
    scanf("%d", &phy);

    printf("Enter your chem marks:\n");
    scanf("%d", &chem);

    printf("Enter your math marks:\n");
    scanf("%d", &math);

    Result(phy, chem, math);

    return 0;
}

float Result(int phy, int chem, int math)
{
    float total = (phy + chem + math) / 3;
    if (phy < 33 || chem < 33 || math < 33 || total < 40)
    {
        printf("You got %f percent marks and you're fail :\n", total);
    }

    else if (total >= 40 && total < 50)
    {
        printf("You got %f percent marks and you passed with Third Grade:\n", total);
    }

    else if (total >= 50 && total < 60)
    {
        printf("You got %f percent marks and you passed with Second Grade:\n", total);
    }

    else if (total >= 60)
    {
        printf("You got %f percent marks and you passed with First Grade:\n", total);
    }
    return 0;
}