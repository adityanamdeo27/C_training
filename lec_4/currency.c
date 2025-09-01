#include <stdio.h>

int main() {
    int choice;
    float amount, converted;
    printf("Currency Converter (from USD):\n");
    printf("1. Convert to Euro (EUR)\n");
    printf("2. Convert to British Pound (GBP)\n");
    printf("3. Convert to Indian Rupee (INR)\n");
    printf("4. Convert to Japanese Yen (JPY)\n");
    printf("5. Convert to Canadian Dollar (CAD)\n");
    printf("Enter your choice (1-5): ");
    scanf("%d", &choice);
    printf("Enter amount in USD: ");
    scanf("%f", &amount);
    switch (choice) {
        case 1:
            converted = amount * 0.85;  // Example rate: 1 USD = 0.85 EUR
            printf("EUR: %.2f\n", converted);
            break;
        case 2:
            converted = amount * 1.35;  // 1 USD = 1.35 GBP
            printf("GBP: %.2f\n", converted);
            break;
        case 3:
            converted = amount * 87.0;  // 1 USD = 87 INR
            printf("INR: %.2f\n", converted);
            break;
        case 4:
            converted = amount * 147; // 1 USD = 147 JPY
            printf("JPY: %.2f\n", converted);
            break;
        case 5:
            converted = amount * 1.35;  // 1 USD = 1.35 CAD
            printf("CAD: %.2f\n", converted);
            break;
        default:
            printf("Invalid choice. Please enter a number between 1 and 5.\n");
    }

    return 0;
}
