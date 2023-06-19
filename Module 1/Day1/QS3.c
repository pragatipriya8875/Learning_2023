/* 3. Write a program to read the 
    - Roll No
    - Name (Note, you should read full name of the student including initials)
    - Marks of Physics, Math and Chemistry
    Calculate the total, percentage and print the summary. */

#include <stdio.h>
#include <string.h>

int main(){
    char name[100];
    int roll, phy, che, maths, total;
    float per;

    printf("Enter the name of Student: ");
    scanf("%s", &name);
    printf("Enter Roll number: ");
    scanf("%d", &roll);
    printf("enter the marks of Phy, che, maths: ");
    scanf("%d%d%d", &phy, &che, &maths);

    total = phy+che+maths;
    per = (total*100)/300;
    
    printf("Roll Number is: %d\n", roll);
    printf("Name of Student is: %s\n", name);
    printf("Total marks is: %d\n", total);
    printf("Total Percentage is: %5.2f\n", per);
    return 0;

}