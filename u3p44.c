//4. Program: Array of structure for 10 cricketers
// Sort them in ascending order by average runs

#include <stdio.h>
struct cricketer {
    char name[50];
    int age;
    int test_matches;
    float avg_runs;
};

int main()
{
    struct cricketer c[10], temp;
    int i, j;

    // Accepting 10 records
    printf("Enter details of 10 cricketers:\n\n");
    for(i = 0; i < 10; i++)
    {
        printf("Cricketer %d:\n", i + 1);

        printf("Name: ");
        scanf(" %[^\n]", c[i].name);

        printf("Age: ");
        scanf("%d", &c[i].age);

        printf("Number of Test Matches: ");
        scanf("%d", &c[i].test_matches);

        printf("Average Runs: ");
        scanf("%f", &c[i].avg_runs);

        printf("\n");
    }

    // Sorting in ascending order by avg_runs
    for(i = 0; i < 9; i++)
    {
        for(j = i + 1; j < 10; j++)
        {
            if(c[i].avg_runs > c[j].avg_runs)
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }

    // Display sorted list
    printf("\n--- Cricketers Sorted by Average Runs (Ascending Order) ---\n");
    for(i = 0; i < 10; i++)
    {
        printf("\nCricketer %d:\n", i + 1);
        printf("Name: %s\n", c[i].name);
        printf("Age: %d\n", c[i].age);
        printf("Test Matches: %d\n", c[i].test_matches);
        printf("Average Runs: %.2f\n", c[i].avg_runs);
    }

    return 0;
}
