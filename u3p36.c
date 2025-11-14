// 30. Program to print all prime numbers between 1 and 500 (Sieve of Eratosthenes)
#include <stdio.h>
#include <string.h>

int main()
{
    int limit = 500, i, p;
    int isPrime[501]; // index 0..500

    for(i = 0; i <= limit; i++)
        isPrime[i] = 1;   // assume prime
    isPrime[0] = isPrime[1] = 0; // 0 and 1 are not prime

    for(p = 2; p * p <= limit; p++)
    {
        if(isPrime[p])
        {
            for(i = p * p; i <= limit; i += p)
                isPrime[i] = 0;
        }
    }

    printf("Prime numbers between 1 and 500 are:\n");
    for(i = 2; i <= limit; i++)
    {
        if(isPrime[i])
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}
