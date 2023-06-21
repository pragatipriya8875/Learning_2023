/*
1. Write a program to swap every alternate element of a given array starting for element 0
For example, let's say we have a[5] = {10, 20, 30, 40, 50}, the result should be a[5] = {30, 20, 10, 40, 50}
one more example a[5] = {10, 20, 30, 40, 50, 60}, the result should be a[5] = {30, 20, 10, 60, 50, 40}

Topics to be covered
- Arrays
- Loops
- Basic Operators
*/


#include <stdio.h>

// Function to swap every alternate element of the array
void swapAlternateElements(int arr[], int size) {
    for (int i = 0; i < size - 1; i += 2) {
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
    }
}

// Function to print the array elements
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr1[] = {10, 20, 30, 40, 50};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    printf("Before swapping: ");
    printArray(arr1, size1);

    swapAlternateElements(arr1, size1);

    printf("After swapping:  ");
    printArray(arr1, size1);

    int arr2[] = {10, 20, 30, 40, 50, 60};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    printf("Before swapping: ");
    printArray(arr2, size2);

    swapAlternateElements(arr2, size2);

    printf("After swapping:  ");
    printArray(arr2, size2);

    return 0;
}
