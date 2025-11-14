// 3. Print the largest and smallest numbers from a 3x3 matrix using pointer

#include <stdio.h>

int main()
{
    int a[3][3];
    int i, j;
    int *ptr = &a[0][0];
    int max, min;

    printf("Enter elements of 3x3 matrix:\n");
    for(i=0; i<3; i++)
        for(j=0; j<3; j++)
            scanf("%d", &a[i][j]);

    max = min = *ptr;

    for(i=0; i<9; i++, ptr++) {
        if(*ptr > max)
            max = *ptr;
        if(*ptr < min)
            min = *ptr;
    }

    printf("Largest element = %d\n", max);
    printf("Smallest element = %d\n", min);

    return 0;
}
