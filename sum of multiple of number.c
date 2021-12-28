#include<stdio.h>
int main() {
    int i,n,sum=0;
    printf("Enter a number \n");
    scanf("%d",&n);
    for(i=1; i<=10; i++) {
        printf("the multiplication of n is %d\n",n*i);
        sum+=n*i;
        printf("sum is %d \n",sum);
    }


    return 0;
}