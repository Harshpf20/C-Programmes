// 13. Program to print sum of all numbers divisible by 13 between 1 and 100
#include <stdio.h>
int main()
{
    int i, sum = 0;
    for(i = 1; i <= 100; i++)
    {
        if(i % 13 == 0)
            sum += i;
    }
    printf("Sum of all numbers divisible by 13 between 1 and 100 = %d\n", sum);
    return 0;
}
