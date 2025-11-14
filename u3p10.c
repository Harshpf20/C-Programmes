// 4. Print 1st n natural numbers using recursion

#include <stdio.h>

void printN(int n)
{
    if(n == 0)
        return;
    printN(n - 1);
    printf("%d ", n);
}

int main()
{
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    printf("First %d natural numbers:\n", n);
    printN(n);
    printf("\n");
    return 0;
}
