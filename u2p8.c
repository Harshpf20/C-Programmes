// 8. Program to copy one array of 5 elements to another array of 10 elements skipping one element
#include <stdio.h>
int main()
{
    int a[5], b[10], i, j = 0;

    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < 10; i++)
    {
        if(i % 2 == 0)
            b[i] = a[j++];
        else
            b[i] = 0; // skipped element
    }

    printf("\nNew array:\n");
    for(i = 0; i < 10; i++)
        printf("%d ", b[i]);

    printf("\n");
    return 0;
}
