#include <stdio.h>

int main() {
    // Declare a variable to store the size of the array
    int array_size;
    // Declare an array of size 50 to store the elements
    int array[50];

    // Ask the user to input the size of the array
    printf("Enter a number of array's size for a series of numbers saving: ");
    // Read the user's input and store it in the array_size variable
    scanf("%d", &array_size);

    // Ask the user to input the elements of the array
    printf("Enter a series of numbers: ");
    // Read the user's input and store it in the array
    for(int i=0; i<array_size; i++) {
        scanf("%d", &array[i]);
    }

    // Sort the elements in the array using the bubble sort algorithm
    // The outer loop (i) runs from 0 to array_size-2
    for(int i=0; i<array_size-1; i++) {
        // The inner loop (j) runs from 0 to array_size-2-i
        for(int j=0; j<array_size-1-i; j++) {
            // Compare the elements at indices j and j+1
            if(array[j] > array[j+1]) {
                // If the elements are in the wrong order, swap them
                int temp = array[j];
                array[j] = array[j+1];
                array[j+1] = temp;
            }
        }
    }

    // Print the sorted array
    printf("After sorting, output sequence: ");
    // Loop through the sorted array and print each element
    for(int i=0; i<array_size; i++) {
        printf("%d ", array[i]);
    }
    // Add a new line character to separate the output from the prompt
    printf("\n");
    // Return 0 to indicate successful execution
    return 0;
}
