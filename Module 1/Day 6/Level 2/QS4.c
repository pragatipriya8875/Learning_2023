/*
Write a function to rotate the above array of structures by K positions

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
} Member;

void rotateArray(Member* array, int size, int k) {
    // Calculate the effective rotation amount
    k = k % size;

    if (k < 0) {
        k += size; // Adjust negative rotation amount
    }

    // Create a temporary array to hold the rotated elements
    Member* tempArray = malloc(size * sizeof(Member));
    if (tempArray == NULL) {
        // Error handling if malloc fails
        printf("Failed to allocate memory.\n");
        return;
    }

    // Copy the elements to the temporary array with rotation
    for (int i = 0; i < size; i++) {
        int newIndex = (i + k) % size;
        tempArray[newIndex] = array[i];
    }

    // Copy the elements back to the original array
    memcpy(array, tempArray, size * sizeof(Member));

    // Free the memory of the temporary array
    free(tempArray);
}

int main() {
    Member members[5];

    // Take input for members
    for (int i = 0; i < 5; i++) {
        printf("Enter ID for member %d: ", i + 1);
        scanf("%d", &members[i].id);
        printf("Enter name for member %d: ", i + 1);
        scanf("%s", members[i].name);
    }

    int k;

    // Take input for rotation amount
    printf("Enter the number of positions to rotate: ");
    scanf("%d", &k);

    // Print the members before rotation
    printf("Members before rotation:\n");
    for (int i = 0; i < 5; i++) {
        printf("Member %d - ID: %d, Name: %s\n", i + 1, members[i].id, members[i].name);
    }

    // Perform the rotation
    rotateArray(members, 5, k);

    // Print the members after rotation
    printf("Members after rotation:\n");
    for (int i = 0; i < 5; i++) {
        printf("Member %d - ID: %d, Name: %s\n", i + 1, members[i].id, members[i].name);
    }

    return 0;
}
