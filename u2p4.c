// 4. Program to print minimum number of notes required for given amount
#include <stdio.h>
int main()
{
    int amt, i;
    int notes[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int count;

    printf("Enter amount: ");
    scanf("%d", &amt);

    printf("\nMinimum number of notes:\n");
    for(i = 0; i < 9; i++)
    {
        count = amt / notes[i];
        if(count > 0)
        {
            printf("%d note(s) of Rs.%d\n", count, notes[i]);
            amt = amt % notes[i];
        }
    }
    return 0;
}
