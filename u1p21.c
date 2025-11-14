//  Program to calculate net salary
// net = gross + allowance - deduction
// Allowance = 10%, Deduction = 3%
#include <stdio.h>
int main()
{
    float gross, net, allowance, deduction;
    printf("Enter gross salary: ");
    scanf("%f", &gross);
    allowance = (10.0 / 100.0) * gross;
    deduction = (3.0 / 100.0) * gross;
    net = gross + allowance - deduction;
    printf("Net Salary = %.2f\n", net);
    return 0;
}
