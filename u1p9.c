//  Program to convert rupees into dollars (1$ = 48 Rs)
#include <stdio.h>
int main()
{
    float rupees, dollars;
    printf("Enter amount in rupees: ");
    scanf("%f", &rupees);
    dollars = rupees / 48;
    printf("%.2f rupees = %.2f dollars\n", rupees, dollars);
    return 0;
}
