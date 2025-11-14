// 35(D). Program to print the following pattern using nested loops
// 5 1
// 5 2
// 4 1
// 4 2
// 3 1
// 3 2

#include <stdio.h>
int main()
{
    int i, j;

    printf("Pattern 35(D):\n\n");
    for(i = 5; i >= 3; i--)
    {
        for(j = 1; j <= 2; j++)
        {
            printf("%d %d\n", i, j);
        }
    }
    return 0;
}
