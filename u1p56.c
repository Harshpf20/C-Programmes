// 26. Program to check whether a given number is an Armstrong number or not
#include <stdio.h>
int main()
{
    int num, temp, rem, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while(num != 0)
    {
        rem = num % 10;
        sum = sum + (rem * rem * rem);
        num = num / 10;
    }

    if(temp == sum)
        printf("The number is an Armstrong number.\n");
    else
        printf("The number is not an Armstrong number.\n");

    return 0;
}
