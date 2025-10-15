#include <stdio.h>
int trap(int height[], int n) {
    int left = 0, right = n - 1;
    int leftMax = 0, rightMax = 0;
    int waterTrapped = 0;
    while (left < right) {
        if (height[left] < height[right]) {
            if (height[left] >= leftMax)
                leftMax = height[left];
            else
                waterTrapped += leftMax - height[left];
    left++;
        } else {
            if (height[right] >= rightMax)
                rightMax = height[right];
            else
                waterTrapped += rightMax - height[right];
    right--;
        }
    }
    return waterTrapped;
}
int main() {
    int height[] = {4,1,1,4};
    int n = sizeof(height) / sizeof(height[0]);
    int result = trap(height, n);
    printf("Water trapped: %d units\n", result);
    return 0;
}
