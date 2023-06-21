/* 2. Prints Bits: Scan a 32bit integer and prints its bits     */

#include <stdio.h>
void printbits(int num){
    for(int i=31; i>=0; i--){
        int bit = (num >> i) & i;
        printf("%d", bit);
    }
}
int main(){
    int num;
    printf("Enter integer value: ");
    scanf("%d", &num);
    printf("Binary Representation: ");
    printbits(num);
    return 0;
}