// 13. Print sum of all numbers divisible by 13 in the range of 1 to 100 using recursion

#include <stdio.h>

int sumDiv13(int num)
{
    if(num > 100)
        return 0;
    if(num % 13 == 0)
        return num + sumDiv13(num + 1);
    else
        return sumDiv13(num + 1);
}

int main()
{
    int sum = sumDiv13(1);
    printf("Sum of all numbers divisible by 13 between 1 and 100 = %d\n", sum);
    return 0;
}
