//  Program to calculate net sales (10% discount on gross sales)
#include <stdio.h>
int main()
{
    float gross, netsales, discount;
    printf("Enter gross sales: ");
    scanf("%f", &gross);
    discount = (10.0 / 100.0) * gross;
    netsales = gross - discount;
    printf("Net Sales = %.2f\n", netsales);
    return 0;
}
