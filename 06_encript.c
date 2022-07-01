#include <stdio.h>

int main()
{
    // char str[]="Badshah";
    // for(int i=0; i<7; i++){
    //     str[i]=str[i]+1;
    // }
    // printf("The encripted string is:%s\n",str);
    char str[20];
    printf("Enter your string:\n");
    gets(str);
    char *ptr = str;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1;
        ptr++;
    }
    printf("The encripted string is:%s\n", str);
    return 0;
}