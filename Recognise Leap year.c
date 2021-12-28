#include<stdio.h>
int main() {
    int year;
    printf("Enter a year\n");
    scanf("%d",&year);
    if(year%400==0) {
        printf("Enter year is leap year\n",year);
    }
    else if(year%100==0 && year%400!=0) {
        printf("Enter year is not a leap year\n",year);
    }
    else if(year%4==0) {
        printf("Enter year is leap year\n",year);
    }
    else {
        printf("Enter year is not a leap year\n",year);
    }
    return 0;
}