/* 5. Write a program to find both smallest and largest digits in given n numbers
For example let's say we have n = 3, and n1 = 8, n2 = 156, n3 = 123450, the result will be "Not Valid", 1 and 6, 0 and 5 */
#include <stdio.h>
int main(){
    int n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(int i=1; i<=n; i++){
        int num;
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        int smallest = 9;
        int largest = 0;
        int digit;
        if(num<9){
            printf("Not Valid\n", i);
        }
        else{
            int temp = num;
            while(temp > 0){
                digit = temp % 10;
                if(digit <smallest){
                    smallest = digit;
                }
                if(digit > largest){
                    largest = digit;
                }
                temp /= 10;
            }
            printf("Number %d = Smallest digit: %d, Largest digit: %d\n", i, smallest, largest);
        }
    }
    return 0;
}