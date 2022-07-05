#include <stdio.h>
#include <string.h>

int main()
{
    char str[50];
    printf("Enter your String:\n");
    gets(str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            str[i] = str[i] - 32;
        }
    }
    printf("Now the string is :%s", str);
    return 0;
}