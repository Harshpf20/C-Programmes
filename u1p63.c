// 33. Program to check whether a number is automorphic or not
#include <stdio.h>
int main()
{
    int num, sq, temp, count = 0, pow = 1;

    printf("Enter a number: ");
    scanf("%d", &num);

    sq = num * num;
    temp = num;

    // Counting digits in num
    while(temp > 0)
    {
        count++;
        temp = temp / 10;
        pow = pow * 10;
    }

    if(sq % pow == num)
        printf("%d is an Automorphic Number.\n", num);
    else
        printf("%d is not an Automorphic Number.\n", num);

    return 0;
}
