// 14. Calculate sum and mean of any 10 values using recursion

#include <stdio.h>

int sumArray(int arr[], int n)
{
    if(n == 0)
        return 0;
    return arr[n - 1] + sumArray(arr, n - 1);
}

int main()
{
    int arr[10], i;
    printf("Enter 10 values:\n");
    for(i = 0; i < 10; i++)
        scanf("%d", &arr[i]);

    int sum = sumArray(arr, 10);
    float mean = sum / 10.0;

    printf("Sum = %d\nMean = %.2f\n", sum, mean);
    return 0;
}
