// 5. Abbreviate first, middle and other names by first letter and print full last name

#include <stdio.h>
#include <string.h>

int main()
{
    char name[100];
    int i, len;

    printf("Enter full name: ");
    gets(name);

    len = strlen(name);

    printf("\nAbbreviated form: ");
    printf("%c.", name[0]); // first initial

    for(i=1; i<len; i++) {
        if(name[i] == ' ' && name[i+1] != '\0' && name[i+1] != ' ')
            printf("%c.", name[i+1]);
    }

    // print last name
    for(i=len-1; i>=0; i--) {
        if(name[i] == ' ') {
            printf(" %s", &name[i+1]);
            break;
        }
    }

    return 0;
}
