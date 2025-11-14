// 36(B). Program to print parallel loop pattern
// 1 5
// 1 5
// 2 4
// 2 4
// 3 3
// 3 3

#include <stdio.h>
int main()
{
    int i, j, k;

    printf("Pattern 36(B):\n\n");
    for(i = 1, j = 5; i <= 3 && j >= 3; i++, j--)
    {
        for(k = 1; k <= 2; k++)
        {
            printf("%d %d\n", i, j);
        }
    }
    return 0;
}
