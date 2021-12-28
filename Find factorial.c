#include<stdio.h>
int factorial(int x);
int main() {
    int i,n;
    printf("enter the value of n\n");
    scanf("%d",&n);
    printf("the value of factorial %d is %d",n, factorial(n));
    return 0;
}
int factorial(int x) {
    if(x==1 || x==0) {
        return 1;
    }
    else {
        return x* factorial(x-1);
    }
}