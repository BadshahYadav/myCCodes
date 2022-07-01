#include <stdio.h>

int occur(char *str, char c);

int main()
{
    char str[] = "Badshah";
    // printf("Enter your string\n");
    // gets(str);
    int count = occur(str, 'h');
    printf("The occurance %c is %d", 'h', count);

    return 0;
}

int occur(char *str, char c)
{
    char *ptr = str;
    int count;
    while (*ptr = '\0')
    {
        count =0;
        if (*ptr == c)
        {
            count++;
        }
        ptr++;
    }
    return count;
}