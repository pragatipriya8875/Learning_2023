/*
4. Find the largest number by deleting single digit in a 4 digit number 5872 - 872, 9856 - 986

Concepts to be used.
- Loops
- Operators
*/

#include <stdio.h>

int findLargestAfterDeletion(int number) {
    int largest = 0;
    int temp = number;
    int multiplier = 1;

    while (temp > 0) {
        int digit = temp % 10;
        temp /= 10;

        int remainingNumber = temp * multiplier + digit;
        if (remainingNumber > largest) {
            largest = remainingNumber;
        }

        multiplier *= 10;
    }

    return largest;
}

int main() {
    int number;

    printf("Enter a 4-digit number: ");
    scanf("%d", &number);

    int largest = findLargestAfterDeletion(number);

    printf("Largest number after deleting a single digit: %d\n", largest);

    return 0;
}
