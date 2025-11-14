// 2. Program to accept 10 values and print 4th, 7th and 9th value
#include <stdio.h>
int main()
{
    int a[10], i;
    printf("Enter 10 values:\n");
    for(i = 0; i < 10; i++)
        scanf("%d", &a[i]);

    printf("\n4th value: %d", a[3]);
    printf("\n7th value: %d", a[6]);
    printf("\n9th value: %d\n", a[8]);

    return 0;
}
