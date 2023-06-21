/* 1. Write a function to return the greatest of 3 number using if else if. */
#include <stdio.h>

int find_greatest(int num1, int num2, int num3) {
    if (num1 >= num2 && num1 >= num3) {
        return num1;
    }
    else if (num2 >= num1 && num2 >= num3) {
        return num2;
    }
    else {
        return num3;
    }
}

int main() {
    int num1, num2, num3;
    
    printf("Enter three numbers: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    
    int result = find_greatest(num1, num2, num3);
    printf("The greatest number is: %d\n", result);
    
    return 0;
}
