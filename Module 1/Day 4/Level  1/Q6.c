/* String to integer  */
#include<stdio.h>
#include<stdlib.h>
int main(){
    char str[40];
    fgets(str,40,stdin);
    int i=0,res = 0;
    while(str[i] != '\0'){
        res = res*10 + (str[i] - 48);
        i++;
    }
    printf("Result = %d",res);
    return 0;
}