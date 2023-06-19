 /*2.  Write a program to print the grade of the given student using if else if block
    - 90 to 100 -> "Grade A"
    - 75 to 89 -> "Grade B"
    - 60 to 74 -> "Grade C"
    - 50 to 59 -> "Grade D"
    - 0 to 49 -> "Grade F" */

#include <stdio.h>
int main(){

    int score;
    printf("Please Enter your score: ");
    scanf("%d", &score);

    if(score>= 90 && score <100){
        printf("Grade is A");
    }
    else if(score>= 75 && score <89){
         printf("Grade is  B");
    }
    else if(score>= 60 && score <74){
        printf("Grade is  C");
    }

    else if(score>= 50 && score <59){
         printf("Grade is  D");
    }
    else if(score<=49){
        printf("Grade is  F");
    }
    else{
        printf("Invalid Entry");
    }
    return 0;
}