#include<stdio.h>

int main()
{
int i,n;
printf("Enter a positive no.:\n");
scanf("%d",&n);
for(i=2;i<n/2;i++){
    if (n%i==0)
    {
        printf("Not a prime\n");
        break;
    }
}
if(n==0 || n==1){
    printf("Neither a prime nor a composite\n");
}
else if(n%i!=0)

{
    printf("A prime no.\n");
    }

return 0;
}