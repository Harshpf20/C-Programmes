// 5. Print 1st n odd numbers using recursion

#include <stdio.h>

void printNOdd(int n, int current)
{
    if(current > n)
        return;
    printf("%d ", 2 * current - 1);
    printNOdd(n, current + 1);
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("First %d odd numbers:\n", n);
    printNOdd(n, 1);
    printf("\n");
    return 0;
}
