/* Write a function to delete a member at the start of the above array of structures
Note : Code must use Dynamic Memory concept
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
} Member;

Member* deleteMember(Member* array, int size) {
    // Check if the array is empty
    if (size == 0) {
        printf("Array is already empty.\n");
        return array;  // Return the original array unchanged
    }

    // Decrease the size of the array
    size--;
    Member* newArray = malloc(size * sizeof(Member));
    if (newArray == NULL) {
        // Error handling if malloc fails
        printf("Failed to allocate memory.\n");
        return array;  // Return the original array unchanged
    }

    // Copy the members from the original array, starting from the second member
    memcpy(newArray, array + 1, size * sizeof(Member));

    // Free the memory of the original array
    free(array);

    return newArray;
}

int main() {
    Member* members = NULL;
    int size = 0;

    int id;
    char name[50];

    // Add members to the array
    printf("Enter ID for the first member: ");
    scanf("%d", &id);
    printf("Enter name for the first member: ");
    scanf("%s", name);
    members = addMember(members, size, id, name);
    size++;

    printf("Enter ID for the second member: ");
    scanf("%d", &id);
    printf("Enter name for the second member: ");
    scanf("%s", name);
    members = addMember(members, size, id, name);
    size++;

    // Print the members before deletion
    printf("Members before deletion:\n");
    for (int i = 0; i < size; i++) {
        printf("Member ID: %d, Name: %s\n", members[i].id, members[i].name);
    }

    // Delete the member at the start
    members = deleteMember(members, size);
    size--;

    // Print the members after deletion
    printf("Members after deletion:\n");
    for (int i = 0; i < size; i++) {
        printf("Member ID: %d, Name: %s\n", members[i].id, members[i].name);
    }

    // Free the allocated memory
    free(members);

    return 0;
}
