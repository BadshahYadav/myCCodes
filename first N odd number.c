#include<stdio.h>

int main() {
    int i,n;
    printf("enter a number\n");
    scanf("%d",&n);
    for(i=0; i<=n; i++)
    {
        if(i%2==1)
            printf("%d\n",i);

        else
            continue;
    }
    printf("\n");
    return 0;

}