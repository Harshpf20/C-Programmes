// 17. Program to count positive, negative, and zero values in 200 numbers
#include <stdio.h>
int main()
{
    int i, num, pos = 0, neg = 0, zero = 0;

    printf("Enter 200 numbers:\n");
    for(i = 1; i <= 200; i++)
    {
        scanf("%d", &num);
        if(num > 0)
            pos++;
        else if(num < 0)
            neg++;
        else
            zero++;
    }

    printf("\nPositive = %d\nNegative = %d\nZeroes = %d\n", pos, neg, zero);
    return 0;
}
