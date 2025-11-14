//  Program to calculate net salary with conditions
// If gross > 10000: allowance = 10%, deduction = 3%
// If gross > 5000: allowance = 7%, deduction = 2%
#include <stdio.h>
int main()
{
    float gross, net, allowance, deduction;
    printf("Enter gross salary: ");
    scanf("%f", &gross);

    if (gross > 10000)
    {
        allowance = gross * 0.10;
        deduction = gross * 0.03;
    }
    else if (gross > 5000)
    {
        allowance = gross * 0.07;
        deduction = gross * 0.02;
    }
    else
    {
        allowance = gross * 0.05;
        deduction = gross * 0.01;
    }

    net = gross + allowance - deduction;

    printf("Net Salary = %.2f\n", net);
    return 0;
}
