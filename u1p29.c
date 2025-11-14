//  Program to calculate net sales with conditional discount
// If gross > 20000: discount = 15%
// If gross > 10000: discount = 10%
// Otherwise: discount = 5%
#include <stdio.h>
int main()
{
    float gross, discount, net;
    printf("Enter gross sales: ");
    scanf("%f", &gross);

    if (gross > 20000)
        discount = gross * 0.15;
    else if (gross > 10000)
        discount = gross * 0.10;
    else
        discount = gross * 0.05;

    net = gross - discount;

    printf("Net Sales = %.2f\n", net);
    return 0;
}
