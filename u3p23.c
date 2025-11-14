// 17. Count +ve, -ve and zeroes in 200 values using recursion

#include <stdio.h>

void countNumbers(int arr[], int n, int *pos, int *neg, int *zero)
{
    if(n == 0)
        return;
    if(arr[n - 1] > 0)
        (*pos)++;
    else if(arr[n - 1] < 0)
        (*neg)++;
    else
        (*zero)++;
    countNumbers(arr, n - 1, pos, neg, zero);
}

int main()
{
    int arr[200], i, pos = 0, neg = 0, zero = 0;
    printf("Enter 200 numbers:\n");
    for(i = 0; i < 200; i++)
        scanf("%d", &arr[i]);

    countNumbers(arr, 200, &pos, &neg, &zero);

    printf("Positive = %d\nNegative = %d\nZero = %d\n", pos, neg, zero);
    return 0;
}
