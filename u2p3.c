// 3. Program to accept 5 values and sort them in ascending order
#include <stdio.h>
int main()
{
    int a[5], i, j, temp;

    printf("Enter 5 values:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    for(i = 0; i < 4; i++)
    {
        for(j = i + 1; j < 5; j++)
        {
            if(a[i] > a[j])
            {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }

    printf("\nValues in ascending order:\n");
    for(i = 0; i < 5; i++)
        printf("%d ", a[i]);

    printf("\n\n(Bubble Sort is used — simple and suitable for small arrays)\n");
    return 0;
}
