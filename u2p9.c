// 9. Program to reverse an array of maximum 5 elements
#include <stdio.h>
int main()
{
    int a[5], i;

    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    printf("\nReversed array:\n");
    for(i = 4; i >= 0; i--)
        printf("%d ", a[i]);

    printf("\n");
    return 0;
}
