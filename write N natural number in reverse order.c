#include<stdio.h>

int main() {
    int i,n;
    printf("Enter the number\n");
    scanf("%d",&n);
    for(i=n; i>=0; i--) {
        printf("%d\n",i);
    }

    return 0;
}
