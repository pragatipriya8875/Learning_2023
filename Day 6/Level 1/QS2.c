/* 2. Write a function to initialize all members in the previous qs array of structures */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Student{
    int roll_no;
    char name[100];
    float marks;
};
typedef struct Student Student;
void initStudent(Student* , int , char*, float);
void displayStudent(Student*); 
void displayArray(Student*, int);
void initArray(Student*, int);
int main(){
    int size = 100;
    Student arr[size]; 
    printf("Enter the size of array(number of students): ");
    scanf("%d", &size);
    initArray(arr, size);
    printf("\n");
    displayArray(arr, size);
    return 0;
}
void initStudent(Student* ptr, int roll, char *nptr, float m){
    ptr->roll_no = roll;
    ptr->marks = m;
    strcpy(ptr->name, nptr);
}
void displayStudent(Student* ptr){
    printf("%d %s %.2f", ptr->roll_no, ptr->name, ptr->marks);
}
void  initArray(Student* ptr, int size){
    int roll;
    char n[20];
    float marks;
    printf("Enter Value: \n");
    for(int i = 0; i<size; i++){
        scanf("%d", &roll);
        scanf("%s", n);
        scanf("%f", &marks);
        initStudent(&ptr[i], roll, n, marks);
    } 
}
void displayArray(Student* ptr, int size){
    printf("Printing Students Information: \n");
    for(int i = 0; i<size; i++){
     displayStudent(&ptr[i]);
     printf("\n");
    }
}