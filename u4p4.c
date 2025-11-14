// 4. Accept records (Roll No., Name) and store them in a CSV file so it opens in Excel
// Format saved: roll,name
// File used: students.csv
// User can enter multiple records; enter 'n' when asked to stop.

#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    int roll;
    char name[100];
    char choice;

    fp = fopen("students.csv", "a"); // append so previous data is preserved
    if(!fp) {
        perror("Unable to open students.csv");
        return 1;
    }

    printf("Enter student records (will be saved to students.csv)\n");

    do {
        printf("Enter Roll No.: ");
        scanf("%d", &roll);
        getchar(); // consume newline

        printf("Enter Name: ");
        fgets(name, sizeof(name), stdin);
        /* remove trailing newline from fgets */
        if(name[strlen(name) - 1] == '\n')
            name[strlen(name) - 1] = '\0';

        /* write as CSV: roll,name\n */
        fprintf(fp, "%d,%s\n", roll, name);

        printf("Add more records? (y/n): ");
        choice = getchar();
        while(getchar() != '\n'); // flush rest of line
    } while(choice == 'y' || choice == 'Y');

    fclose(fp);
    printf("Records saved to students.csv\n");
    printf("You can open students.csv directly in MS-Excel (File → Open → choose students.csv).\n");
    return 0;
}
