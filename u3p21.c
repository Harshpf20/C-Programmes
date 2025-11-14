// 15. Calculate sum and mean of any n values using recursion

#include <stdio.h>

int sumArray(int arr[], int n)
{
    if(n == 0)
        return 0;
    return arr[n - 1] + sumArray(arr, n - 1);
}

int main()
{
    int n, i;
    printf("Enter number of values: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d values:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int sum = sumArray(arr, n);
    float mean = sum / (float)n;

    printf("Sum = %d\nMean = %.2f\n", sum, mean);
    return 0;
}
