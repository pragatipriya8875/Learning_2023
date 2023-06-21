/* Sum & Average of 1D  Array   */
#include <stdio.h>
int main(){
    int arr[100], i, size, sum=  0;
    float avg = 0;
    printf("Enter the number of elements you want to add in array: ");
    scanf("%d", &size);
    printf("Enter Elements in array: ");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    for(i=0; i<size; i++){
        sum = sum+arr[i];
    }
    printf("Sum of array elements are: %d", sum);
    for(i=0; i<size; i++){
        avg = sum/size;
    }
    printf("\nAverage of Array Elements are is: %.2f", avg);
    return 0;
}