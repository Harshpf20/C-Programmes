// 3. Print 1st 10 even numbers using recursion

#include <stdio.h>

void printEven(int n, int current)
{
    if(current > n)
        return;
    printf("%d ", 2 * current);
    printEven(n, current + 1);
}

int main()
{
    printf("First 10 even numbers:\n");
    printEven(10, 1);
    printf("\n");
    return 0;
}
