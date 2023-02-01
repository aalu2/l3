#include <stdio.h>

// Defining a function to sort the array
void sort(int arr[], int size) 
{ 
    int temp; 
  
    // Sorting odd numbers in ascending order
    for (int i = 0; i < size; i++) { 
        for (int j = i+1; j < size; j++) { 
            if (arr[i] > arr[j] && arr[i]%2 != 0 && arr[j]%2 != 0) { 
                // Swapping the values
                temp = arr[i]; 
                arr[i] = arr[j]; 
                arr[j] = temp; 
            } 
        } 
    } 
  
    // Sorting even numbers in ascending order
    for (int i = 0; i < size; i++) { 
        for (int j = i+1; j < size; j++) { 
            if (arr[i] > arr[j] && arr[i]%2 == 0 && arr[j]%2 == 0) { 
                // Swapping the values
                temp = arr[i]; 
                arr[i] = arr[j]; 
                arr[j] = temp; 
            } 
        } 
    } 
} 
  
// Main function
int main() 
{ 
    int size;
    // Reading the size of the array
    printf("Enter a number of array’s size for a series of numbers saving: ");
    scanf("%d", &size);
    
    int arr[size];
    // Reading the elements of the array
    printf("Enter a series of numbers: ");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Calling the sort function to sort the array
    sort(arr, size);
    
    // Printing the sorted array
    printf("After sorting, output sequence: ");
    for (int i = 0; i < size; i++) {
        if (arr[i]%2 != 0) {
            printf("%d ", arr[i]);
        }
    }
    for (int i = 0; i < size; i++) {
        if (arr[i]%2 == 0) {
            printf("%d ", arr[i]);
        }
    }
  
    // Indicating successful execution of the program
    return 0; 
}
