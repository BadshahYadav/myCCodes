#include <stdio.h>

int CheckGreaterNum(int arr[], int n);

int main()
{
    int arr[4];
    printf("Enter your array:\n");
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("\n");
    CheckGreaterNum(arr, 4);
    return 0;
}

int CheckGreaterNum(int arr[], int n)
{
    int grt = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > grt)
        {
            grt = arr[i];
        }
    }
    printf("%d is the greater number:\n", grt);
    return 0;
}