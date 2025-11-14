// 1. Write a function power(a, b) to calculate the value of a raised to b

#include <stdio.h>

int power(int a, int b)
{
    int result = 1, i;
    for(i = 1; i <= b; i++)
        result *= a;
    return result;
}

int main()
{
    int a, b;
    printf("Enter base and exponent: ");
    scanf("%d %d", &a, &b);

    printf("%d raised to %d is %d\n", a, b, power(a, b));
    return 0;
}
