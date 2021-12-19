#include<stdio.h>

int main() {
    int i;
    printf("enter a number\n");
    scanf("%d",&i);


    if(i%2==0) {

        printf("The number %d is even",i);
    }
    else {
        printf("The number%d is odd",i);
        
    }
    
    return 0;

}