//  Program to calculate total and average of three subjects
#include <stdio.h>
int main()
{
    float s1, s2, s3, total, avg;
    printf("Enter marks of three subjects: ");
    scanf("%f %f %f", &s1, &s2, &s3);
    total = s1 + s2 + s3;
    avg = total / 3;
    printf("Total = %.2f\nAverage = %.2f\n", total, avg);
    return 0;
}
