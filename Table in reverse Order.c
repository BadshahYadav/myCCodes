#include<stdio.h>
int main() {
    int i,n;
    printf("Enter vale of n\n");
    scanf("%d",&n);
    for(i=10; i>=1; i--) {
        int table=n*i;
        printf("write table %d\n",table);
    }

    return 0;
}