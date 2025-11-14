// 5. Function to update both maximum and minimum values in an array using call by reference

#include <stdio.h>

void findMaxMin(int arr[], int n, int *max, int *min)
{
    int i;
    *max = *min = arr[0];
    for(i = 1; i < n; i++)
    {
        if(arr[i] > *max)
            *max = arr[i];
        if(arr[i] < *min)
            *min = arr[i];
    }
}

int main()
{
    int arr[10], n, max, min, i;
    printf("Enter number of elements (max 10): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    findMaxMin(arr, n, &max, &min);

    printf("Maximum = %d\nMinimum = %d\n", max, min);
    return 0;
}
