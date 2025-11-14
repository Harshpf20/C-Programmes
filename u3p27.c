// 21. Separate digits of a number using recursion

#include <stdio.h>

void printDigits(int n)
{
    if(n < 10)
    {
        printf("%d ", n);
        return;
    }
    printDigits(n / 10);
    printf("%d ", n % 10);
}

int main()
{
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printDigits(n);
    return 0;
}
