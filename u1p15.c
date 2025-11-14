//  Program to convert Fahrenheit into Celsius
#include <stdio.h>
int main()
{
    float f, c;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &f);
    c = (5.0 / 9.0) * (f - 32);
    printf("%.2f Fahrenheit = %.2f Celsius\n", f, c);
    return 0;
}
