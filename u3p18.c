// 12. Print your name n times using recursion

#include <stdio.h>

void printNameN(int n)
{
    if(n == 0)
        return;
    printf("Harsh\n"); // replace with your name
    printNameN(n - 1);
}

int main()
{
    int n;
    printf("Enter how many times you want to print your name: ");
    scanf("%d", &n);
    printNameN(n);
    return 0;
}
