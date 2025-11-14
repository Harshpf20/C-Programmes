// 23. Program to find sum of digits of a given number
#include <stdio.h>
int main()
{
    int num, sum = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num != 0)
    {
        rem = num % 10;
        sum += rem;
        num = num / 10;
    }

    printf("Sum of digits = %d\n", sum);
    return 0;
}
