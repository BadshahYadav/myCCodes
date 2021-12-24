#include<stdio.h>

int main() {
    int income, tax;
    printf("Enter your income\n");
    scanf("%d",&income);
    if(income<=250000) {
        printf("Your tax is %d\n",tax= 0);
    }
    else if(income>250000 && income<=500000) {
        printf("Your tax is %d\n",tax= (income-250000)*0.05);
    }
    else if(income>500000 && income<=1000000) {
        printf("Your tax is %d\n",tax= (income-500000)*0.2);
    }
    else if(income>1000000) {
        printf("Your tax is %d\n",tax= (income-1000000)*0.3);

    }



    return 0;
}