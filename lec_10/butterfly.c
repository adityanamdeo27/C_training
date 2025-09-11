#include <stdio.h>

int main() {
    int n;

    // Ask the user for input
    printf("Enter the number : ");
    scanf("%d", &n);

    // Upper part of the pattern
    for (int i = 0; i < n; i++) {
        // Left stars
        for (int j = 0; j <= i; j++) {
            printf("*");
        }

        // Spaces in the middle
        for (int k = n; k > i; k--) {
            printf(" ");
        }
        for (int p = n; p > i; p--) {
            printf(" ");
        }

        // Right stars
        for (int z = 0; z <= i; z++) {
            printf("*");
        }

        printf("\n");
    }

    // Lower part of the pattern
    for (int i = n - 2; i >= 0; i--) {
        // Left stars
        for (int j = 0; j <= i; j++) {
            printf("*");
        }

        // Spaces in the middle
        for (int k = n; k > i; k--) {
            printf(" ");
        }
        for (int p = n; p > i; p--) {
            printf(" ");
        }

        // Right stars
        for (int z = 0; z <= i; z++) {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}
