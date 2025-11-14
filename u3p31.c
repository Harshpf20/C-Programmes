// 25. Check palindrome using recursion

#include <stdio.h>

int reverseNum(int n, int rev)
{
    if(n == 0)
        return rev;
    return reverseNum(n / 10, rev * 10 + (n % 10));
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    if(n == reverseNum(n, 0))
        printf("%d is a Palindrome number\n", n);
    else
        printf("%d is not a Palindrome number\n", n);

    return 0;
}
