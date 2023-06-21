/* Toggle Case */
#include<stdio.h>
#include<ctype.h>
int main(){
    char str[40];
    fgets(str,40,stdin);
    int i=0;
    while(str[i] != '\0'){
        if(isupper(str[i])){
            str[i] = tolower(str[i]);
        }
        else if(islower(str[i])){
            str[i] = toupper(str[i]);
        }
        i++;
    }
    puts(str);
    return 0;
}