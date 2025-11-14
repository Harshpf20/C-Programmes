// 31. Sum of all prime numbers between 1 and 500 using recursion

#include <stdio.h>

int isPrime(int n, int i)
{
    if(n <= 1) return 0;
    if(i == 1) return 1;
    if(n % i == 0) return 0;
    return isPrime(n, i - 1);
}

int sumPrime(int n)
{
    if(n > 500)
        return 0;

    if(isPrime(n, n / 2))
        return n + sumPrime(n + 1);
    else
        return sumPrime(n + 1);
}

int main()
{
    int sum = sumPrime(1);
    printf("Sum of prime numbers between 1 and 500 = %d\n", sum);
    return 0;
}
