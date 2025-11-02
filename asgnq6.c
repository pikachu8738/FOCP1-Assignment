#include <stdio.h>
#include <string.h>
#include <math.h> // For pow function, though for integer powers, multiplication is often preferred to avoid floating-point issues.

// Function to convert Decimal to Binary
void decimalToBinary(int decimalNum) {
    if (decimalNum == 0) {
        printf("Binary: 0\n");
        return;
    }
    int binaryArray[32]; // Assuming a 32-bit integer
    int i = 0;
    while (decimalNum > 0) {
        binaryArray[i] = decimalNum % 2;
        decimalNum /= 2;
        i++;
    }
    printf("Binary: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaryArray[j]);
    }
    printf("\n");
}

// Function to convert Binary to Decimal
void binaryToDecimal(char binaryString[]) {
    long long decimalNum = 0;
    int power = 0;
    int len = strlen(binaryString);

    for (int i = len - 1; i >= 0; i--) {
        if (binaryString[i] == '1') {
            decimalNum += (1LL << power); // Using bit shift for power of 2
        } else if (binaryString[i] != '0') {
            printf("Invalid binary digit encountered: %c\n", binaryString[i]);
            return;
        }
        power++;
    }
    printf("Decimal: %lld\n", decimalNum);
}

int main() {
    int choice;
    int decimalInput;
    char binaryInput[64]; // Buffer for binary string input

    printf("Number System Converter\n");
    printf("1. Decimal to Binary\n");
    printf("2. Binary to Decimal\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter a decimal number: ");
            scanf("%d", &decimalInput);
            decimalToBinary(decimalInput);
            break;
        case 2:
            printf("Enter a binary number: ");
            scanf("%s", binaryInput);
            binaryToDecimal(binaryInput);
            break;
        default:
            printf("Invalid choice.\n");
    }

    return 0;
}