// 22. Count digits using recursion

#include <stdio.h>

int countDigits(int n)
{
    if(n == 0)
        return 0;
    return 1 + countDigits(n / 10);
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printf("Total digits = %d\n", countDigits(n));
    return 0;
}
