#include <stdio.h>
int main()
{
    int i, n,Bad=0;
    //Here Bad is used as a indicator..
    printf("Enter a numbers\n");
    scanf("%d", &n);
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            //Here Bad is changed it shows that any number divided by n..So it's not a prime.
            Bad=1;
            printf("%d is not a prime\n", n);
            break;
        }
   } //This is special case ..
    if (n == 0 || n == 1)
    {
        printf("%d neither prime nor composite\n", n);
    }
    else if (Bad==0) //when Bad is not changed in the loop..
    {
        printf("%d is a prime number\n", n);
    }
    return 0;
}