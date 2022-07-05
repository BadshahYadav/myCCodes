#include<stdio.h>

int Check(int n);

int main()
{
    int n;
    printf("Enter a number :\n");
    scanf("%d",&n);
    Check(n);
return 0;
}

int Check(int n){
    if(n<1){
        printf("%d is not a natural no.\n",n);
    }
    else{
        printf("%d is not a natural no. :\n",n);
    }
    return 0;
}