#include<stdio.h>

int main() {
    int i,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    while(n>0) {
        printf("%d\n",n--);
    }

    return 0;
}
