#include<stdio.h>
int bad();

int main()
{
  int i,r;
 r=bad();
 printf("%d",r);
return 0;
}
int bad()
{
  int fact=1,n,i;
  printf("Enter no.\n");
  scanf("%d",&n);

for(i=1;i<=n;i++)
{
 fact=fact*i;
}
return fact=fact*i;
}