#include <stdio.h>
int PrintHighestFrequency(char str[], int n);
int main()
{
    char str[10];
    printf("Enter your String:\n");
    gets(str);
    PrintHighestFrequency(str,10);
    return 0;
}
int PrintHighestFrequency(char str[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        int count = 1, S = str[i];
        for (i = 0; str[i] != '\0'; i++)
        {
            if (str[i+1] == S)
            {
                count++;
            }
        }
        printf("Frequency of the is :%d\n",count);
    }
    return 0;
}