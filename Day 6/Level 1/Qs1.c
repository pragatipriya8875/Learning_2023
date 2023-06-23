#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student{
    int rollno;
    char name[20];
    float marks;
};

void parseInputString(const char* inputString, struct Student* students, int numStudents) {
    const char* delimiter = " ";
    char* inputCopy = strdup(inputString);  // Create a non-const copy of the input string
    char* token;
    int i = 0;

    token = strtok(inputCopy, delimiter);
    while (token != NULL && i < numStudents) {
        students[i].rollno = atoi(token);
        
        token = strtok(NULL, delimiter);
        if (token == NULL) {
            printf("Invalid input string!\n");
            free(inputCopy);  // Free the memory allocated for the input copy
            return;
        }
        strncpy(students[i].name, token, sizeof(students[i].name) - 1);
        
        token = strtok(NULL, delimiter);
        if (token == NULL) {
            printf("Invalid input string!\n");
            free(inputCopy);  // Free the memory allocated for the input copy
            return;
        }
        students[i].marks = atof(token);
        
        token = strtok(NULL, delimiter);
        i++;
    }

    free(inputCopy);  // Free the memory allocated for the input copy
}

int main() {
    int numStudents;
    printf("Enter the number of students: ");
    scanf("%d", &numStudents);
    getchar(); // consume the newline character

    struct Student* students = malloc(numStudents * sizeof(struct Student));
    
    printf("Enter the student details:\n");
    for (int i = 0; i < numStudents; i++) {
        char inputString[100];
        fgets(inputString, sizeof(inputString), stdin);
        inputString[strcspn(inputString, "\n")] = '\0'; // remove the newline character
        
        parseInputString(inputString, &students[i], 1);
    }
    
    // Print the student details
    printf("\nStudent details:\n");
    for (int i = 0; i < numStudents; i++) {
        printf("Roll No: %d\n", students[i].rollno);
        printf("Name: %s\n", students[i].name);
        printf("Marks: %.2f\n\n", students[i].marks);
    }
    
    free(students);
    
    return 0;
}
