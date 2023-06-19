/* Write a simple calculator program which should accept inputs in the same order.
    - Operand 1
    - Operator
    - Operand 2
The order of scan should be same, for example, you should first scan in the following order.
printf("Enter Number1: );
Scan the first number form the user.
printf("Enter the operator: );
Scan the operator from the user.
printf("Enter Number2: );
Scan the second number form the user.   */

#include <stdio.h>

int main() {
    int num1, num2;
    char opt;
    printf("Enter 1st Num: ");
    scanf("%d", &num1);
    printf("Enter the operator: ");
    scanf(" %c", &opt);
    printf("Enter 2nd Numb: ");
    scanf("%d", &num2);
    double result;
    switch (opt) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            result = num1 / num2;
            break;
        default:
            printf("Invalid operator\n");
            return 0;
    }
    printf("Result: %.2lf\n", result);
    return 0;
}