#include <stdio.h>
#define ROWS 4
#define COLS 4
int main() {
    int arr[ROWS][COLS] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12},
        {13,14, 15, 16}
    };
    // Reverse each row
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0, k = COLS - 1; j < k; j++, k--) {
            // Swap arr[i][j] and arr[i][k]
            int temp = arr[i][j];
            arr[i][j] = arr[i][k];
            arr[i][k] = temp;
        }
    }
    // Print the row-wise reversed array
    printf("Row-wise reversed 2D array:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
