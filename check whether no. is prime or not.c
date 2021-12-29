#include<stdio.h>
int main() {
    int i=2,n, prime=1;
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i; i<n; i++) {
        if(n%i==0) {
            prime=0;
            break;
        }
    }
    if(prime==0) {
        printf("The number is not a prime\n");
    }
    else {
        printf("The number is a prime\n");
    }
    return 0;
}