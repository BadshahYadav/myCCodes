#include <stdio.h>

void reverse(int arr[],int n);
void printArry(int arr[],int n);

int main()
{
    int arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    printArry(arr,10);
    printf("\n");
    reverse(arr,10);
    printArry(arr,10);
    return 0;
}

void reverse(int arr[],int n)
{
    int temp;
    for (int i = 0; i < n / 2; i++)
    {
        temp = arr[i];
        arr[i] = arr[n - i - 1];
        arr[n - i - 1] = temp;
    } 
}

void printArry(int arr[],int n){
  for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
}