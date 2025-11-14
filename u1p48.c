// 18. Program to count boys and girls in a class of 5 students
#include <stdio.h>
int main()
{
    int i, boys = 0, girls = 0;
    char sex;

    printf("Enter sex code for 5 students (M/F):\n");
    for(i = 1; i <= 5; i++)
    {
        scanf(" %c", &sex);  // space before %c to skip newline
        if(sex == 'M' || sex == 'm')
            boys++;
        else if(sex == 'F' || sex == 'f')
            girls++;
    }

    printf("\nBoys = %d\nGirls = %d\n", boys, girls);
    return 0;
}
