// Program to calculate area and perimeter of a rectangle
#include <stdio.h>
int main()
{
    float l, b, area, peri;
    printf("Enter length and breadth: ");
    scanf("%f %f", &l, &b);
    area = l * b;
    peri = 2 * (l + b);
    printf("Area = %.2f\nPerimeter = %.2f\n", area, peri);
    return 0;
}
