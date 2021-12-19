#include<stdio.h>

int main() {
    int p,r,t;
    printf("enter value of p\n ");
    scanf("%d", &p);
    printf("enter the value of r\n");
    scanf("%d", &r);
    printf("enter the value of t\n");
    scanf("%d", &t);
    int si=p*r*t/100;
    printf("the value of si %d", si);

    return 0;

}