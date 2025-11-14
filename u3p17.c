// 11. Print your name 5 times using recursion

#include <stdio.h>

void printName(int n)
{
    if(n == 0)
        return;
    printf("Harsh\n"); // you can replace this with your name
    printName(n - 1);
}

int main()
{
    printName(5);
    return 0;
}
