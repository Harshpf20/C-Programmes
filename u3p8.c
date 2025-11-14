// 2. Print 1st 10 odd numbers using recursion

#include <stdio.h>

void printOdd(int n, int current)
{
    if(current > n)
        return;
    printf("%d ", 2 * current - 1);
    printOdd(n, current + 1);
}

int main()
{
    printf("First 10 odd numbers:\n");
    printOdd(10, 1);
    printf("\n");
    return 0;
}
