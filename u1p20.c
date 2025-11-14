//  Program to calculate area of a triangle
#include <stdio.h>
int main()
{
    float base, height, area;
    printf("Enter base and height: ");
    scanf("%f %f", &base, &height);
    area = (base * height) / 2;
    printf("Area = %.2f\n", area);
    return 0;
}
