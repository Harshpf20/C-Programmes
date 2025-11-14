// 6. Simple calculator using separate functions for add, subtract, multiply, and divide

#include <stdio.h>

float add(float a, float b) { return a + b; }
float subtract(float a, float b) { return a - b; }
float multiply(float a, float b) { return a * b; }
float divide(float a, float b) { return b != 0 ? a / b : 0; }

int main()
{
    float a, b;
    char op;

    printf("Enter first number, operator, second number (e.g., 5 + 3): ");
    scanf("%f %c %f", &a, &op, &b);

    switch(op)
    {
        case '+': printf("Result = %.2f\n", add(a, b)); break;
        case '-': printf("Result = %.2f\n", subtract(a, b)); break;
        case '*': printf("Result = %.2f\n", multiply(a, b)); break;
        case '/': 
            if(b == 0) 
                printf("Division by zero not allowed.\n");
            else 
                printf("Result = %.2f\n", divide(a, b)); 
            break;
        default: printf("Invalid operator.\n");
    }

    return 0;
}
