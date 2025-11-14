// 15. Program to calculate sum and mean of any n values
#include <stdio.h>
int main()
{
    int i, n;
    float num, sum = 0, mean;

    printf("Enter number of values: ");
    scanf("%d", &n);

    printf("Enter %d numbers:\n", n);
    for(i = 1; i <= n; i++)
    {
        scanf("%f", &num);
        sum += num;
    }

    mean = sum / n;
    printf("\nSum = %.2f\nMean = %.2f\n", sum, mean);
    return 0;
}
