// 28. Program to check whether a given number is a perfect number
// (sum of proper divisors up to n/2 equals n)
#include <stdio.h>

int main()
{
    int n, i, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n <= 1) {
        printf("%d is not a Perfect number.\n", n);
        return 0;
    }

    for(i = 1; i <= n / 2; i++)
    {
        if(n % i == 0)
            sum += i;
    }

    if(sum == n)
        printf("%d is a Perfect number.\n", n);
    else
        printf("%d is not a Perfect number.\n", n);

    return 0;
}
