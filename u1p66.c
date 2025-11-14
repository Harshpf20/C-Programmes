// 35(B). Program to print the following pattern using nested loops
// 1 1
// 2 1
// 3 1
// 1 2
// 2 2
// 3 2
// 1 3
// 2 3
// 3 3

#include <stdio.h>
int main()
{
    int i, j;

    printf("Pattern 35(B):\n\n");
    for(j = 1; j <= 3; j++)
    {
        for(i = 1; i <= 3; i++)
        {
            printf("%d %d\n", i, j);
        }
    }
    return 0;
}
