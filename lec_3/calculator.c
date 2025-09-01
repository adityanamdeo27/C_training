#include <stdio.h>
int main() {
    float a, b, result;
    char op;
    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);
    printf("Enter operation (+, -, *, /): ");
    scanf(" %c",&op);
    if (op == '+') {
        result = a + b;
    } else if (op == '-') {
        result = a - b;
    } else if (op == '*') {
        result = a * b;
    } else if (op == '/') {
        if (b == 0) {
            printf("Error: Division by zero.\n");
            return 1;
        }
        result = a / b;
    } else {
        printf("Invalid operator.\n");
        return 1;
    }
    printf("Result: %.2f\n", result);
    return 0;
}