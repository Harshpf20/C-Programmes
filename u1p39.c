// 9. Program to print sum of first n even numbers
#include <stdio.h>
int main()
{
    int i, n, sum = 0, num = 2;
    printf("Enter value of n: ");
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
    {
        sum += num;
        num += 2;
    }
    printf("Sum of first %d even numbers = %d\n", n, sum);
    return 0;
}
