//3. Program: Structure student_data with roll no, name, marks and total

#include <stdio.h>

struct student_data {
    int roll;
    char name[50];
    int phy, math, chem;
    int total;
};

int main()
{
    struct student_data s;

    // Input
    printf("Enter Roll Number: ");
    scanf("%d", &s.roll);

    printf("Enter Name: ");
    scanf(" %[^\n]", s.name);

    printf("Enter Physics marks: ");
    scanf("%d", &s.phy);

    printf("Enter Maths marks: ");
    scanf("%d", &s.math);

    printf("Enter Chemistry marks: ");
    scanf("%d", &s.chem);

    // Calculate total
    s.total = s.phy + s.math + s.chem;

    // Output
    printf("\n--- Student Information ---\n");
    printf("Roll No.   : %d\n", s.roll);
    printf("Name       : %s\n", s.name);
    printf("Physics    : %d\n", s.phy);
    printf("Maths      : %d\n", s.math);
    printf("Chemistry  : %d\n", s.chem);
    printf("Total Marks: %d\n", s.total);

    return 0;
}
