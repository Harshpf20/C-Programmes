// 2. Sort all the elements of a 4x4 matrix and store the result in a single-dimension array

#include <stdio.h>
#define SIZE 4

int main()
{
    int a[SIZE][SIZE], arr[SIZE*SIZE];
    int i, j, k = 0, temp;

    printf("Enter elements of 4x4 matrix:\n");
    for(i=0; i<SIZE; i++)
        for(j=0; j<SIZE; j++)
            scanf("%d", &a[i][j]);

    // Copy to 1D array
    for(i=0; i<SIZE; i++)
        for(j=0; j<SIZE; j++)
            arr[k++] = a[i][j];

    // Bubble sort
    for(i=0; i<k-1; i++)
        for(j=0; j<k-i-1; j++)
            if(arr[j] > arr[j+1]) {
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

    printf("\nSorted elements in 1D array:\n");
    for(i=0; i<k; i++)
        printf("%d ", arr[i]);

    return 0;
}
