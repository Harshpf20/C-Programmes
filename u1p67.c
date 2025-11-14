// 35(C). Program to print the following pattern using nested loops
// 1 1 1
// 1 1 2
// 1 2 1
// 1 2 2
// 2 1 1
// 2 1 2
// 2 2 1
// 2 2 2

#include <stdio.h>
int main()
{
    int i, j, k;

    printf("Pattern 35(C):\n\n");
    for(i = 1; i <= 2; i++)
    {
        for(j = 1; j <= 2; j++)
        {
            for(k = 1; k <= 2; k++)
            {
                printf("%d %d %d\n", i, j, k);
            }
        }
    }
    return 0;
}
