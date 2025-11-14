// 29. Program to check whether a given number is prime or not
#include <stdio.h>
#include <math.h>

int main()
{
    int n, i, isPrime = 1;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n <= 1)
        isPrime = 0;
    else {
        for(i = 2; i <= (int)sqrt((double)n); i++)
        {
            if(n % i == 0) {
                isPrime = 0;
                break;
            }
        }
    }

    if(isPrime)
        printf("%d is a Prime number.\n", n);
    else
        printf("%d is not a Prime number.\n", n);

    return 0;
}
