// 1. Program to accept 5 values and print them later on
#include <stdio.h>
int main()
{
    int a[5], i;
    printf("Enter 5 values:\n");
    for(i = 0; i < 5; i++)
        scanf("%d", &a[i]);

    printf("\nYou entered:\n");
    for(i = 0; i < 5; i++)
        printf("%d\n", a[i]);

    return 0;
}
