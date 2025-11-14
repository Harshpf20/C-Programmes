//  Program to find the largest and smallest of two values
#include <stdio.h>
int main()
{
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    if (a > b)
        printf("%d is largest and %d is smallest\n", a, b);
    else if (b > a)
        printf("%d is largest and %d is smallest\n", b, a);
    else
        printf("Both numbers are equal\n");

    return 0;
}
