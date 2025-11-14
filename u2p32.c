// 1. Perform addition, subtraction and multiplication operations on two matrices

#include <stdio.h>
#define SIZE 3

int main()
{
    int a[SIZE][SIZE], b[SIZE][SIZE], sum[SIZE][SIZE], diff[SIZE][SIZE], prod[SIZE][SIZE];
    int i, j, k;

    printf("Enter elements of first matrix (%dx%d):\n", SIZE, SIZE);
    for(i=0; i<SIZE; i++)
        for(j=0; j<SIZE; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second matrix (%dx%d):\n", SIZE, SIZE);
    for(i=0; i<SIZE; i++)
        for(j=0; j<SIZE; j++)
            scanf("%d", &b[i][j]);

    // Addition and Subtraction
    for(i=0; i<SIZE; i++)
        for(j=0; j<SIZE; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            diff[i][j] = a[i][j] - b[i][j];
        }

    // Multiplication
    for(i=0; i<SIZE; i++)
        for(j=0; j<SIZE; j++) {
            prod[i][j] = 0;
            for(k=0; k<SIZE; k++)
                prod[i][j] += a[i][k] * b[k][j];
        }

    printf("\nSum of matrices:\n");
    for(i=0; i<SIZE; i++) {
        for(j=0; j<SIZE; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    printf("\nDifference of matrices:\n");
    for(i=0; i<SIZE; i++) {
        for(j=0; j<SIZE; j++)
            printf("%d ", diff[i][j]);
        printf("\n");
    }

    printf("\nProduct of matrices:\n");
    for(i=0; i<SIZE; i++) {
        for(j=0; j<SIZE; j++)
            printf("%d ", prod[i][j]);
        printf("\n");
    }

    return 0;
}
