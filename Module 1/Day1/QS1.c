/*1(a).
Write a function to find Largest of 2 numbers using 
- If-Else
- Ternary operator */

#include <stdio.h>

int main(){
    int a, b;
    printf("Enter the value of a: \n");
    scanf("%d", &a);
    printf("Enter the value of b: \n");
    scanf("%d", &b);
    if(a>b){
        printf("A is greater than B.");
    }
    else{
        printf("B is greater tha A.");
    }
return 0;
}