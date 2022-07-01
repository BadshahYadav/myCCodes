#include <stdio.h>

int main()
{
    char str[] = "Badshah";
    char *ptr = str;
    while (*ptr != '\0')
    {
        printf("%c", *ptr);
        // printf("%s\n", str);
        ptr++;
    }
    return 0;
}