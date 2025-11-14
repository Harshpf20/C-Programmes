//  Program to convert dollars into rupees (1$ = 48 Rs)
#include <stdio.h>
int main()
{
    float dollars, rupees;
    printf("Enter amount in dollars: ");
    scanf("%f", &dollars);
    rupees = dollars * 48;
    printf("%.2f dollars = %.2f rupees\n", dollars, rupees);
    return 0;
}
