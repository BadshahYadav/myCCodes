#include<stdio.h>

int main() {
    int physics, chemistry, mathematics;
    float total;
    printf("Enter physics marks \n");
    scanf("%d",& physics);
    printf("Enter chemistry marks \n");
    scanf("%d",& chemistry);
    printf("Enter mathematics marks \n");
    scanf("%d",& mathematics);
    total = (physics + chemistry + mathematics)/3;
    if(total<40 || chemistry<33 || physics<33 || mathematics<33) {
        printf("Your percentage is %f and you are fail \n",total);
    }
    else if(total>=60) {
        printf("Your percentage is %f and you are passed with first grade \n",total);
    }
    else if(total>=50 && total<60) {
        printf("Your percentage is %f and you are passed with second grade \n",total);

    }
    else if(total>=40 && total<50) {
        printf("Your percentage is %f and you are passed with third grade \n",total);

    }

    return 0;

}