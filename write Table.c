#include<stdio.h>
int main() {
    int i,n;
    printf("Enter vale of n\n");
    scanf("%d",&n);
    for(i=1; i<=10; i++) {
        int table=n*i;
        printf("write table %d\n",table);
    }

    return 0;
}