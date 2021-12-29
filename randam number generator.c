#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    int number;
    srand(time(0));
    number= rand()%1000+1;
//random number between (1-1000)
    printf("The number is %d\n", number);

    return 0;
}
