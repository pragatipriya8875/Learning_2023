/*
 Suppose 7 names are stored in an array of pointers names[] as shown below:
 char *name[]={
        "Santosh", "Amol", "Santosh Jain", "Kishore", "Rahul", "Amolkumar", "Hemant"
          }
  Write a program to arrange these names in alphabetical order.
*/

#include <stdio.h>
#include <string.h>

// Function to swap two string pointers
void swapStrings(char** str1, char** str2) {
    char* temp = *str1;
    *str1 = *str2;
    *str2 = temp;
}

// Function to perform bubble sort on the array of names
void bubbleSort(char* names[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (strcmp(names[j], names[j + 1]) > 0) {
                swapStrings(&names[j], &names[j + 1]);
            }
        }
    }
}

// Function to print the array of names
void printNames(char* names[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%s\n", names[i]);
    }
}

int main() {
    char* names[] = {
        "Santosh", "Amol", "Santosh Jain", "Kishore", "Rahul", "Amolkumar", "Hemant"
    };
    int size = sizeof(names) / sizeof(names[0]);

    printf("Before sorting:\n");
    printNames(names, size);

    bubbleSort(names, size);

    printf("\nAfter sorting:\n");
    printNames(names, size);

    return 0;
}
