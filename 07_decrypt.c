#include <stdio.h>

void decrypt(char *str);

int main()
{
    char str[20];
    printf("Enter your string\n");
    gets(str);
    decrypt(str);

    return 0;
}

void decrypt(char *str)
{
    char *ptr = str;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1;
        ptr++;
    }
    printf("The is string is :%s\n", str);
}