/* Program to Reverse the Array   */
#include <stdio.h>
int main(){
    int arr[100], i, size;
    printf("Enter no of elements you want to add in the array: ");
    scanf("%d", &size);
    printf("Enter Elements in array: ");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Elements of Array Before Reversing: ");
    for(i =0; i<size; i++){
        printf("%d\t", arr[i]);
    }
    printf("\nElements of Array After Reversing: ");
    for(i =size-1; i>=0; i--){
        printf("%d\t", arr[i]);
    }
    return 0;
}