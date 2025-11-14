// 4. Accept and print later on three books names using array of pointers

#include <stdio.h>

int main()
{
    char books[3][50];
    char *ptr[3];
    int i;

    printf("Enter names of 3 books:\n");
    for(i=0; i<3; i++) {
        printf("Book %d: ", i+1);
        scanf(" %[^\n]", books[i]);
        ptr[i] = books[i];
    }

    printf("\nBooks entered are:\n");
    for(i=0; i<3; i++)
        printf("%s\n", ptr[i]);

    return 0;
}
