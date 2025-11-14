//  Program to calculate area of a circle
#include <stdio.h>
int main()
{
    float r, area;
    printf("Enter radius: ");
    scanf("%f", &r);
    area = (22.0 / 7.0) * r * r;
    printf("Area = %.2f\n", area);
    return 0;
}
