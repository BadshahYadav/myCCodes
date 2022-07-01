#include <stdio.h>

int arrShift(int arr[], int n, int shift);

int main()
{
    int arr_val[] = {1, 2, 3, 4, 5};
    int shift;
    printf("Enter how many times you want to shift the array:\n");
    scanf("%d", &shift);
    arrShift(arr_val, 5, shift);
   
    return 0;
}
int arrShift(int arr[], int n, int shift)
{
    for (int j = 0; j < shift; j++)
    {
        int last = arr[n - 1];
        for (int i = n - 1; i > 0; i--)
        {
            arr[i] = arr[i - 1];
        }
        arr[0] = last;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
    return 0;
}