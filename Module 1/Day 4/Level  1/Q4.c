/* Difference between Even and Odd elements */
#include <stdio.h>
int main(){
    int arr[100], i, size, sumeven = 0, sumodd = 0, diff = 0;
    printf("Enter the number of elements you want to add in array: ");
    scanf("%d", &size);
    printf("Enter Elements in array: ");
    for(i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    printf("Elements of the Array are: ");
     for(i =0; i<size; i++){
        printf("%d\t", arr[i]);
    }
    for(i=0; i<size; i++){
        if(arr[i]%2 == 0){
            sumeven = sumeven+arr[i];
        }
        else{
            sumodd = sumodd + arr[i];
        }
    }
    printf("\nSum of Even Elements are: %d", sumeven);
    printf("\nSum of Odd Elements are: %d", sumodd);
    diff = sumeven-sumodd;
    printf("\nDifference of Even and Odd Elements are: %d", diff);
    return 0;
}