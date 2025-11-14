// 25. Program to check whether a given number is palindrome or not
#include <stdio.h>
int main()
{
    int num, temp, rem, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    while(num != 0)
    {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    }

    if(temp == rev)
        printf("The number is a Palindrome.\n");
    else
        printf("The number is not a Palindrome.\n");

    return 0;
}
