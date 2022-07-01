#include <stdio.h>
#include <string.h>
char strelen();
int main()
{
    char str[50];
    int len;
    printf("Enter sting\n");
    gets(str);
    len = strlen(str);
    printf("%d", len);
    return 0;
}