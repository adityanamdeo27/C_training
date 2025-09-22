#include <stdio.h>
void sum(int a, int b, int *result) {
    *result = a + b;
}
int main() {
    int num1 = 5;
    int num2 = 10;
    int result;
    sum(num1, num2, &result);
    printf("Sum = %d\n", result);
    return 0;
}
