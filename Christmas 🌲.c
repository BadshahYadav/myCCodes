#include<stdio.h>
void triangle(int);
void pole(int);
int main() {
    int n;
    printf("Enter @  ");
    scanf("%d",&n);
    printf("\nMerry Christmas Everyone  \n");
    triangle(n);
    triangle(n);

    pole(n);
    return 0;
}
void triangle(int n) {
    int i,j;
    n=10;
    for(i=1; i<=n; i++) {
        for(j=1; j<=n-i; j++) {
            printf(" ");
        }
        for(j=0; j<2*i-1; j++) {
            printf("@");
        }
        printf("\n");
    }

}

void pole(int n) {
    int i,j;

    for(i=1; i<=n; i++) {
        for(j=1; j<=n-2; j++) {
            printf(" ");
        }
        printf("  @@@@@\n");


    }
    printf("Create By Badshah😎");
}