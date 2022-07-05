#include<stdio.h>
 int check(char c);
int main()
{
    char c;
    printf("Enter a character:\n");
    scanf("%c",&c);
    check(c);

return 0;
}
int check(char c){
    printf("The ASCII value of given characeter is :%d\n",c);
    if (c>='0' && c<='9')
    {
        printf("Eneter number is a digit:\n");
    }
    else {
        printf("Enter number is not a digit:\n");
    }
    
}