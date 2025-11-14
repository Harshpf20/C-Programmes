// 12. Program to print your name n times
#include <stdio.h>
int main()
{
    int i, n;
    printf("Enter how many times to print your name: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
        printf("Harsh\n");   // Replace "Harsh" with your name
    return 0;
}
