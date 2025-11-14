// 14. Program to calculate sum and mean of any 10 values
#include <stdio.h>
int main()
{
    int i;
    float num, sum = 0, mean;

    printf("Enter 10 numbers:\n");
    for(i = 1; i <= 10; i++)
    {
        scanf("%f", &num);
        sum += num;
    }

    mean = sum / 10;
    printf("\nSum = %.2f\nMean = %.2f\n", sum, mean);
    return 0;
}
