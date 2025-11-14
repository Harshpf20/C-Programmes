// 1.Program: Student structure with functions to print all names
//          and search student by roll number

#include <stdio.h>
#include <string.h>

struct student {
    int roll;
    char name[50];
    char course[50];
    char major[50];
    char minor[50];
};

// function to print all names
void printNames(struct student s[], int n)
{
    int i;
    printf("\nNames of all students:\n");
    for(i = 0; i < n; i++)
        printf("%s\n", s[i].name);
}

// function to search by roll number
void printByRoll(struct student s[], int n, int r)
{
    int i, found = 0;

    for(i = 0; i < n; i++)
    {
        if(s[i].roll == r)
        {
            found = 1;
            printf("\nStudent details:\n");
            printf("Roll Number : %d\n", s[i].roll);
            printf("Name        : %s\n", s[i].name);
            printf("Course      : %s\n", s[i].course);
            printf("Major       : %s\n", s[i].major);
            printf("Minor       : %s\n", s[i].minor);
            break;
        }
    }

    if(!found)
        printf("\nNo student found with roll number %d\n", r);
}

int main()
{
    struct student s[10];
    int i, r;

    printf("Enter details of 10 students:\n\n");

    for(i = 0; i < 10; i++)
    {
        printf("Student %d:\n", i + 1);

        printf("Roll Number: ");
        scanf("%d", &s[i].roll);

        printf("Name: ");
        scanf(" %[^\n]", s[i].name);

        printf("Course Name: ");
        scanf(" %[^\n]", s[i].course);

        printf("Major Subject: ");
        scanf(" %[^\n]", s[i].major);

        printf("Minor Subject: ");
        scanf(" %[^\n]", s[i].minor);

        printf("\n");
    }

    // Print all student names
    printNames(s, 10);

    // Search by roll number
    printf("\nEnter roll number to search: ");
    scanf("%d", &r);

    printByRoll(s, 10, r);

    return 0;
}
