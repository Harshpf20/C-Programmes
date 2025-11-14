// 16. Find out largest and smallest out of 100 numbers using recursion

#include <stdio.h>

int findMax(int arr[], int n)
{
    if(n == 1)
        return arr[0];
    int max = findMax(arr, n - 1);
    return (arr[n - 1] > max) ? arr[n - 1] : max;
}

int findMin(int arr[], int n)
{
    if(n == 1)
        return arr[0];
    int min = findMin(arr, n - 1);
    return (arr[n - 1] < min) ? arr[n - 1] : min;
}

int main()
{
    int arr[100], i;
    printf("Enter 100 numbers:\n");
    for(i = 0; i < 100; i++)
        scanf("%d", &arr[i]);

    printf("Largest = %d\n", findMax(arr, 100));
    printf("Smallest = %d\n", findMin(arr, 100));
    return 0;
}
