/*  1. Patern Generator: Write a program to print the given pattern below using 3 functions 
(1st to accept n and to print from 1 to n, 2nd to accept n and print spaces in between, 
3rd to accept the n and print from n to 1)
1234554321
1234    4321
123        321
12            21
1                1        */
#include <stdio.h>
void Number(int n){
    for(int i=1; i<=n; i++){
        printf("%d", i);
    }
}
void Spaces(int n){
    for(int i=1; i<=n; i++){
        printf(" ");
    }
}
void ReverseNumber(int n){
    for(int i=n; i>=1; i--){
        printf("%d", i);
    }
}
void pattern(int n){
    for(int i=n; i>=1; i--){
        Number(i);
        Spaces(2*(n-i));
        ReverseNumber(i);
        printf("\n");
    }
}
int main(){
    int n;
    printf("Enter the value till you want to print: ");
    scanf("%d", &n);
    pattern(n);
    return 0;
}