#include<stdio.h>
#include<string.h>

int main()
{
char str1[]="Badshah";
char str2[]=" Yadav";
strcat(str1,str2);
printf("%s\n",str1);

int len=strlen(str1);
printf("%d",len);
return 0;
}