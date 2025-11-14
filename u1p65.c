// 35(A). Program to print the following pattern using nested loops
// 1 1
// 1 2
// 1 3
// 2 1
// 2 2
// 2 3

#include <stdio.h>
int main()
{
    int i, j;

    printf("Pattern 35(A):\n\n");
    for(i = 1; i <= 2; i++)
    {
        for(j = 1; j <= 3; j++)
        {
            printf("%d %d\n", i, j);
        }
    }
    return 0;
}
