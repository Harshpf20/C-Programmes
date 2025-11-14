// 16. Program to find largest and smallest among 100 numbers
#include <stdio.h>
int main()
{
    int i, num, largest, smallest;

    printf("Enter 100 numbers:\n");
    scanf("%d", &num);
    largest = smallest = num;

    for(i = 2; i <= 100; i++)
    {
        scanf("%d", &num);
        if(num > largest)
            largest = num;
        if(num < smallest)
            smallest = num;
    }

    printf("\nLargest = %d\nSmallest = %d\n", largest, smallest);
    return 0;
}
