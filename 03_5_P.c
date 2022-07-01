#include <stdio.h>

void LowerCase(char c);

int main()
{
    char c;
    printf("Enter any character:\n");
    scanf("%c", &c);
    LowerCase(c);
    return 0;
}

void LowerCase(char c)
{

    if (c >= 'a' && c <= 'z')
    {
        printf("%c is a lower case:\n", c);
    }
    else
    {
        printf("%c is  Not a lower case:\n", c);
    }
}
