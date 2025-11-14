// 34. Print Fibonacci series up to n terms using recursion

#include <stdio.h>

int fib(int n)
{
    if(n == 1 || n == 2)
        return 1;
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci series:\n");
    for(i = 1; i <= n; i++)
        printf("%d ", fib(i));

    printf("\n");
    return 0;
}
