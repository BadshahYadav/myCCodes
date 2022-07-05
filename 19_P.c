#include <stdio.h>
int insert(int arr[], int n, int num);
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int num;
    printf("Enter a number that you want to insert:\n");
    scanf("%d", &num);
    insert(arr, 10, num);
    return 0;
}
int insert(int arr[], int n, int num)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < arr[n - 1])
        {
            printf("%d\n", arr[i+1]);
        }
        else
        {
            printf("%d\n", num);
        }
    }
    return 0;
}