// 27. Program to find all factors of a given number
#include <stdio.h>

int main()
{
    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n <= 0) {
        printf("Please enter a positive integer.\n");
        return 0;
    }

    printf("Factors of %d are:\n", n);
    for(i = 1; i <= n; i++)
    {
        if(n % i == 0)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
