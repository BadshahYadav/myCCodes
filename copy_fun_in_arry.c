#include<stdio.h>

int main()
{
char str1[20];
char str2[20];
printf("Enter string 1:\n");
gets(str1);
printf("Enter string 2:\n");
gets(str2); 

// char str1[10]="Badshah";
// char str2[10]="Yadav";

for(int i=0;i<20;i++){
str2[i]=str1[i];
}
printf("Now the string 2 is :%s\n",str2);
printf("Now the string 2 is :%s\n",str1);
return 0;
}