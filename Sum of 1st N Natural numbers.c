#include<stdio.h>
int main() {
    int i=0,n,sum=0;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    while(i<=n) {
        sum+=i;
        i++;
    }
    printf("the value of sigma(1-n)is %d\n",sum);


    return 0;
}