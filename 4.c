#include <stdio.h> 

// Function to count the number of ones in the binary representation of a decimal number
int CountOnes(int decimalNumber) {
    int countOfOnes = 0;
    while (decimalNumber) {
        // Remove the last 1 in the binary representation of the decimal number
        decimalNumber = decimalNumber & (decimalNumber-1);
        // Increment the count of ones
        countOfOnes++;
    }
    return countOfOnes;
}

// Main function
int main() {
    int decimalInput;
    printf("Enter decimal number: ");
    scanf("%d", &decimalInput);
    printf("There are %d ones in given decimal number\n", CountOnes(decimalInput));
    return 0;
}
