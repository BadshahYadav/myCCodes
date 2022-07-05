#include <stdio.h>

int Count(int arr[], int n, int num);

int main()
{
    int arr[] = {2, 2, 3, 1, 2, 3, 2, 1, 2, 3};
    int num;
    printf("Enter a number you want to check\n");
    scanf("%d", &num);
    Count(arr, 10, num);
    return 0;
}

int Count(int arr[], int n, int num)
{
    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == num)
        {
            count++;
        }
    }
    printf("The occurance of %d is: %d", num, count);
    return 0;
}