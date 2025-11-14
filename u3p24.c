// 18. Find out how many boys and girls are there in a class of 50 students using recursion
// Input sex code: M for boy, F for girl

#include <stdio.h>

void countGender(char sex[], int n, int *boys, int *girls)
{
    if(n == 0)
        return;
    if(sex[n - 1] == 'M' || sex[n - 1] == 'm')
        (*boys)++;
    else if(sex[n - 1] == 'F' || sex[n - 1] == 'f')
        (*girls)++;
    countGender(sex, n - 1, boys, girls);
}

int main()
{
    char sex[50];
    int i, boys = 0, girls = 0;

    printf("Enter sex code (M/F) for 50 students:\n");
    for(i = 0; i < 50; i++)
        scanf(" %c", &sex[i]); // space before %c to ignore newline

    countGender(sex, 50, &boys, &girls);

    printf("Total Boys = %d\nTotal Girls = %d\n", boys, girls);
    return 0;
}
