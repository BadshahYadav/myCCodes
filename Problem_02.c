#include<stdio.h>
#include<string.h>

int main()
{
char str1[10];
char str2[10];
char c;
 int i=0;
 
printf("Enter first string\n");
scanf("%s",str1);
printf("Enter second string\n");

 while(c!='\n'){
     fflush(stdin);
     scanf("%c",&c);
     str2[i]=c;
       i++;
 }
str2[i-1] ='\0';
printf("The first string is :%s\n",str1);
printf("The first string is :%s\n",str2);
printf("compare the string: %d\n", strcmp(str1, str2));

return 0;
}
