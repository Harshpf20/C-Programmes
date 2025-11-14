//  Program to convert minutes into hours
#include <stdio.h>
int main()
{
    int minutes;
    float hours;
    printf("Enter minutes: ");
    scanf("%d", &minutes);
    hours = minutes / 60.0;
    printf("%d minutes = %.2f hours\n", minutes, hours);
    return 0;
}
