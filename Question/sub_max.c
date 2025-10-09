#include <stdio.h>

int main() {
    int arr[] = {1, -2, 3, -4, -5, 6, -7, -8, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k;

    printf("Enter value of k: ");
    scanf("%d", &k);

    if (k < 1 || k > n) {
        printf("Invalid k value. Must be between 1 and %d\n", n);
        return 1;
    }

    for (int i = 0; i <= n - k; i++) {
        int has_adjacent_positives = 0;

        // Check for any two adjacent positives in the subarray
        for (int j = i; j < i + k - 1; j++) {
            if (arr[j] > 0 && arr[j + 1] > 0) {
                has_adjacent_positives = 1;
                break;
            }
        }

        if (has_adjacent_positives) {
            continue; // Skip this subarray
        }

        // Compare the first adjacent pair in the subarray
        if (arr[i] > arr[i + 1]) {
            printf("%d,", arr[i]);
        } else {
            printf("%d,", arr[i + 1]);
        }
    }

    return 0;
}
