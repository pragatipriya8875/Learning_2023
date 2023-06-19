/* 1. (b) Write a function to find biggest of 2 numbers using 
    - ternary operator */

#include <stdio.h>

int main(){
    int a, b, maximum;
    printf("Enter the value of a: \n");
    scanf("%d", &a);
    printf("Enter the value of b: \n");
    scanf("%d", &b);
    maximum = (a>b) ? a:b;
    printf("Biggest of %d and %d is %d", a, b, maximum);
   
return 0;
}