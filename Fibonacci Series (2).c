#include <stdio.h>
int main() {
    int i, n,r;
    printf("Enter term no. of febo series\n");
    scanf("%d",&n);
    for(i=1; i<=n; i++) {
        r = fibo(i);
        printf("%dth term of febo series is %d\n",i,r);
    }
    return 0;
}
int fibo(int m) {
    if(m==1) {
        return 0;
    }
    else if(m==2) {
        return 1;
    }
    return fibo(m-1)+fibo(m-2);
}