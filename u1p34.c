// 4. Program to print first n natural numbers
#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter value of n: ");
    scanf("%d", &n);
    printf("First %d natural numbers are:\n", n);
    for(i = 1; i <= n; i++)
        printf("%d\n", i);
    return 0;
}
