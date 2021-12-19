#include<stdio.h>

int main() {
    int age, year;
    printf("what is your year \n");
    scanf("%d",&year);
    age=2021-year;
    printf("Exact age %d \n",age);
    if(age>=18){
    printf("welcome to the adult world,Now you can drink");
    }
else{
printf("you are too young to join us ");
}
    return 0;

}