#include <stdio.h>
int main() {
    int a = 5;   // Binary: 0000 0101
    int leftShift = a << 1;   // Shift left by 1 bits
    int rightShift = a >> 1;  // Shift right by 1 bit
    printf("Original value (a)     = %d\n", a);
    printf("Left shift (a << 1)    = %d\n", leftShift);
    printf("Right shift (a >> 1)   = %d\n", rightShift);
    return 0;
}