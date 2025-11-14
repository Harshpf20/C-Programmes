// 33. Check whether a number is Automorphic using recursion

#include <stdio.h>

int power10(int d)
{
    if(d == 0)
        return 1;
    return 10 * power10(d - 1);
}

int countDigits(int n)
{
    if(n == 0)
        return 0;
    return 1 + countDigits(n / 10);
}

int main()
{
    int n, sq, d, mod;

    printf("Enter a number: ");
    scanf("%d", &n);

    sq = n * n;
    d = countDigits(n);
    mod = power10(d);

    if(sq % mod == n)
        printf("%d is an Automorphic number.\n", n);
    else
        printf("%d is not an Automorphic number.\n", n);

    return 0;
}
