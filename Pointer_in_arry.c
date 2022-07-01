#include<stdio.h>

int main()
{
int arr[5]={1,20,35,44,51},i,*p;
*p = arr[5];
printf(" %d\n %d\n %d\n",*p++,(*p)++,*++p);
return 0;
}