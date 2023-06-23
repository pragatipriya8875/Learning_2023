/*
Write a function to add a member at the end of the above array of structures
Note : Code must use Dynamic Memory concept*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
} Member;

Member* addMember(Member* array, int size, int id, const char* name) {
    // Create a new Member structure
    Member newMember;
    newMember.id = id;
    strncpy(newMember.name, name, sizeof(newMember.name) - 1);

    // Increase the size of the array
    size++;
    Member* newArray = realloc(array, size * sizeof(Member));
    if (newArray == NULL) {
        // Error handling if realloc fails
        printf("Failed to allocate memory.\n");
        return array;  // Return the original array unchanged
    }

    // Add the new member at the end of the array
    newArray[size - 1] = newMember;

    return newArray;
}

int main() {
    Member* members = malloc(sizeof(Member));  // Allocate memory for one member initially
    int size = 0;  // Current size of the array

    int id;
    char name[50];

    // Add the first member
    printf("Enter ID for the first member: ");
    scanf("%d", &id);
    printf("Enter name for the first member: ");
    scanf("%s", name);
    members = addMember(members, size, id, name);
    size++;

    // Add another member
    printf("Enter ID for the second member: ");
    scanf("%d", &id);
    printf("Enter name for the second member: ");
    scanf("%s", name);
    members = addMember(members, size, id, name);
    size++;

    // Print the members
    printf("Members:\n");
    for (int i = 0; i < size; i++) {
        printf("Member ID: %d, Name: %s\n", members[i].id, members[i].name);
    }

    // Free the allocated memory
    free(members);

    return 0;
}
