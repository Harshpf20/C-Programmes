// 6. Compare two strings lexicographically.
#include <stdio.h>
int main()
{
    char str1[100], str2[100];
    int i, flag = 0;
    printf("Enter first string: ");
    gets(str1);
    printf("Enter second string: ");
    gets(str2);

    for(i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
    {
        if(str1[i] != str2[i])
        {
            flag = str1[i] - str2[i];
            break;
        }
    }

    if(flag == 0)
        printf("Both strings are same.\n");
    else if(flag > 0)
        printf("First string is greater.\n");
    else
        printf("Second string is greater.\n");

    return 0;
}
