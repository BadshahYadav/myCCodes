#include <stdio.h>
int greaterNum(int arr[], int n);
int main()
{
    int arr[] = {10, 12, 2, 32, 1, 4, 14, 25, 55, 69};
   int store = greaterNum(arr, 10);
   printf("The greater number is :%d",store);
    return 0;
}
int greaterNum(int arr[], int n)
{
    int grt = arr[0];
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > grt)
        {
            grt = arr[i];
        }
    }
    return grt;
}