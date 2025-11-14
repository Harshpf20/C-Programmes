// 19. Print all integers from 1 to 100 divisible by 5 using recursion

#include <stdio.h>

void printDiv5(int n)
{
    if(n > 100)
        return;
    if(n % 5 == 0)
        printf("%d ", n);
    printDiv5(n + 1);
}

int main()
{
    printf("Numbers divisible by 5 between 1 and 100:\n");
    printDiv5(1);
    return 0;
}
