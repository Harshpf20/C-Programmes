// 3. Program to print first 10 even numbers
#include <stdio.h>
int main()
{
    int i, num = 2;
    printf("First 10 even numbers are:\n");
    for(i = 1; i <= 10; i++)
    {
        printf("%d\n", num);
        num += 2;
    }
    return 0;
}
