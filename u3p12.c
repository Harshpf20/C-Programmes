// 6. Print 1st n even numbers using recursion

#include <stdio.h>

void printNEven(int n, int current)
{
    if(current > n)
        return;
    printf("%d ", 2 * current);
    printNEven(n, current + 1);
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("First %d even numbers:\n", n);
    printNEven(n, 1);
    printf("\n");
    return 0;
}
