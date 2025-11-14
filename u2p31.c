// 12. Print frequency of each vowel in a given string.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[200];
    int i, a=0, e=0, ii=0, o=0, u=0;
    printf("Enter a string: ");
    gets(str);

    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]=='a'||str[i]=='A') a++;
        else if(str[i]=='e'||str[i]=='E') e++;
        else if(str[i]=='i'||str[i]=='I') ii++;
        else if(str[i]=='o'||str[i]=='O') o++;
        else if(str[i]=='u'||str[i]=='U') u++;
    }

    printf("Frequency of vowels:\n");
    printf("A/a: %d\nE/e: %d\nI/i: %d\nO/o: %d\nU/u: %d\n", a,e,ii,o,u);
    return 0;
}
