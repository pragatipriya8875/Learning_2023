/* 2. Write a program to swap any type of data passed to an function.    */

#include <stdio.h>
void swap(int*, int*);
int main(){
    int num1,num2;
    printf("Enter First Number: ");
    scanf("%d", &num1);
    printf("Enter Second Number: ");
    scanf("%d", &num2);
    printf("Before swapping a= %d and b= %d\n", num1, num2);
    swap(&num1, &num2);
    printf("After swapping a= %d and b= %d\n", num1, num2);
}
void swap(int* x, int* y){
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}