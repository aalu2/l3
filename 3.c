#include <stdio.h> // Include the standard input/output library

// Function for finding maximum pieces with n cuts
int findMaximumPieces(int n) {
    int x = n / 2; // Calculate the maximum number of horizontal cuts possible, by dividing the total number of cuts by 2
    // Calculate the maximum number of pieces by using the formula (x + 1) * (n - x + 1), where x is the number of horizontal cuts and (n - x) is the number of vertical cuts
    return ((x + 1) * (n - x + 1));
}

int main() {
    int n, pieces; // Declare variables to store the number of cuts and the number of pieces
    printf("Enter how many cuts you want: "); // Prompt the user to enter the number of cuts
    scanf("%d", &n); // Read the input and store it in the variable n
    pieces = findMaximumPieces(n); // Call the function to find the maximum number of pieces with n cuts
    printf("Pieces will be: %d", pieces); // Print the number of pieces to the console
    return 0; // Return 0 to indicate successful termination of the program
}
