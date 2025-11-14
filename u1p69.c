// 36(A). Program to print parallel loop pattern
// 1 5
// 2 4
// 3 3
// 4 2
// 5 1

#include <stdio.h>
int main()
{
    int i, j;

    printf("Pattern 36(A):\n\n");
    for(i = 1, j = 5; i <= 5 && j >= 1; i++, j--)
    {
        printf("%d %d\n", i, j);
    }
    return 0;
}
