// Program to convert kilograms into grams
#include <stdio.h>
int main()
{
    float kg, grams;
    printf("Enter weight in kilograms: ");
    scanf("%f", &kg);
    grams = kg * 1000;
    printf("%.2f kilograms = %.2f grams\n", kg, grams);
    return 0;
}
