#include<stdio.h>

int main()
{
int X,Y,Z,K;
X=2,Y=3;Z=3;K=1;
int Store = 3*X/Y-Z+K;
// here first we check precedence oder of experssion ;
// we know that *,/ have same precedence order  greater than + ,- ;

// first 3*X which is 3*2 we get 6;
// then 6/Y which  is 6/3 we get 2;
// then 2-3 we get -1;
// After that -1+k which is -1+1 we get 0;
// Our final answer is 0;
printf("The value of given experssion:%d",Store);
return 0;
}