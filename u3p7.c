// 1. Print 1st 10 natural numbers using recursion

#include <stdio.h>

void printNatural(int n)
{
    if(n == 0)
        return;
    printNatural(n - 1);
    printf("%d ", n);
}

int main()
{
    printf("First 10 natural numbers:\n");
    printNatural(10);
    printf("\n");
    return 0;
}
