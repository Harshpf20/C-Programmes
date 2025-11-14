// 8. Program to print sum of first n odd numbers
#include <stdio.h>
int main()
{
    int i, n, sum = 0, num = 1;
    printf("Enter value of n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        sum += num;
        num += 2;
    }
    printf("Sum of first %d odd numbers = %d\n", n, sum);
    return 0;
}
