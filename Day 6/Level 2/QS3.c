/*
Write a function to swap 2 members in different indexes (based on user input) in the above array of structures

*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    int id;
    char name[50];
} Member;

void swapMembers(Member* array, int index1, int index2) {
    // Swap the members at the specified indexes
    Member temp = array[index1];
    array[index1] = array[index2];
    array[index2] = temp;
}

int main() {
    Member members[3];

    // Take input for members
    for (int i = 0; i < 3; i++) {
        printf("Enter ID for member %d: ", i + 1);
        scanf("%d", &members[i].id);
        printf("Enter name for member %d: ", i + 1);
        scanf("%s", members[i].name);
    }

    // Print the members before swapping
    printf("Members before swapping:\n");
    for (int i = 0; i < 3; i++) {
        printf("Member %d - ID: %d, Name: %s\n", i + 1, members[i].id, members[i].name);
    }

    int index1, index2;

    // Take input  to swap
    printf("Enter the indexes of the members to swap (separated by space): ");
    scanf("%d %d", &index1, &index2);

    // Perform the swap
    swapMembers(members, index1, index2);

    //  after swapping
    printf("Members after swapping:\n");
    for (int i = 0; i < 3; i++) {
        printf("Member %d - ID: %d, Name: %s\n", i + 1, members[i].id, members[i].name);
    }

    return 0;
}
