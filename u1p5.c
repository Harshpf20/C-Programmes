//  Program to perform addition, subtraction, multiplication, and division
#include <stdio.h>
int main()
{
    float a, b;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("Sum = %.2f\n", a + b);
    printf("Difference = %.2f\n", a - b);
    printf("Product = %.2f\n", a * b);
    printf("Division = %.2f\n", a / b);

    return 0;
}
