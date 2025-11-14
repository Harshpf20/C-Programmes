//  Program to convert dollars into pounds (1$ = 48 Rs, 1 pound = 70 Rs)
#include <stdio.h>
int main()
{
    float dollars, rupees, pounds;
    printf("Enter amount in dollars: ");
    scanf("%f", &dollars);
    rupees = dollars * 48;
    pounds = rupees / 70;
    printf("%.2f dollars = %.2f pounds\n", dollars, pounds);
    return 0;
}
