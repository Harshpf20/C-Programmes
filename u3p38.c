// 32. Count prime numbers between 1 and 500 using recursion

#include <stdio.h>

int isPrime(int n, int i)
{
    if(n <= 1) return 0;
    if(i == 1) return 1;
    if(n % i == 0) return 0;
    return isPrime(n, i - 1);
}

int countPrime(int n)
{
    if(n > 500)
        return 0;

    if(isPrime(n, n / 2))
        return 1 + countPrime(n + 1);
    else
        return countPrime(n + 1);
}

int main()
{
    int count = countPrime(1);
    printf("Total prime numbers between 1 and 500 = %d\n", count);
    return 0;
}
