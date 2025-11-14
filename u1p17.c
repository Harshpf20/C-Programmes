// Program to calculate area and perimeter of a square
#include <stdio.h>
int main()
{
    float l, area, peri;
    printf("Enter side length: ");
    scanf("%f", &l);
    area = l * l;
    peri = 4 * l;
    printf("Area = %.2f\nPerimeter = %.2f\n", area, peri);
    return 0;
}
