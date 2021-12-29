#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main() {
    int number, guess, nguesses;
    srand(time(0));
    number= rand()%1000+1;
//random number between (1-1000);
    do {
        printf("guess number between (1-1000)\n");
        scanf("%d",&guess);
        if(guess>number) {
            printf("Lower number please\n");
        }
        else if(guess<number) {
            printf("Higher number please\n");
        }
        else if(guess==number) {
            printf("You guessed it in %d attempt \n",nguesses);
        }
        nguesses++;
    }
    while(guess!=number);
    return 0;
}