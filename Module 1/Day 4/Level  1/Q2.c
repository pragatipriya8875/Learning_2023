/*To find the  Min and Max Element of an array   */
#include <stdio.h>
int main(){
    int a[100], i, size, max, min;
    printf("Enter no of elements you want to add: ");
    scanf("%d", &size);
    printf("Enter all Elements in array: ");
    for(i=0; i<size; i++){
        scanf("%d", &a[i]);
    }
    max = a[0];
    for(i = 0; i<size; i++){
        if(a[i]> max){
            max = a[i];
        }
    }
    printf("Maximum element of array is: %d\n", max);
    min = a[0];
    for(i = 0; i<size; i++){
        if(a[i]< min){
            min = a[i];
        }
    }
    printf("Minimum element of array is: %d", min);
    return 0;
}