//program 1 level 2 solution
#include<stdio.h>
void setfuc(int n);
void clearfuc(int n);
void toggfuc(int n);
int main(){
    int n,op,t;
    printf("\nEnter a number:");
    scanf("%d",&n);
    while(1){
        printf("\nEnter 1 For set operation of bit");
        printf("\nEnter 2 For clear  operation of bit");
        printf("\nEnter 3 For toggle operation of bit");
        printf("\nNow enter your option:");
        scanf("%d",&op);
        if(op==1){
            setfuc(n);
        }
        else if(op==2){
            clearfuc(n);
        }
        else if(op==3){
            toggfuc(n);
        }
        else{
            printf("Invalid option");
        }
        printf("\nIf you want to exit ? please enter 0 else enter 1 to continue :");
        scanf("%d",&t);
        if(t==0){
            break;
        }
    }
}
void setfuc(int n){
    int k;
    printf("\nEnter a bit to be set in a given number:");
    scanf("%d",&k);
    printf("\nGiven number is %d",n);
    n =n|(1<<(k-1));
    printf("\nAfter setting a %d-bit of a given number is %d",k,n);
    return;
}
void clearfuc(int n){
    int k;
    printf("\nEnter a bit to be set in a given number:");
    scanf("%d",&k);
    printf("\nGiven number is %d",n);
    n =n&(~(1<<(k-1)));
    printf("\nAfter clear a %d-bitof a given number is %d",k,n);
    return;
}
void toggfuc(int n){
    int k;
    printf("\nEnter a bit to be set in a given number:");
    scanf("%d",&k);
    printf("\nGiven number is %d",n);
    n =n^(1<<(k-1));
    printf("\nAfter toggle a  %d-bit of a given number is %d",k,n);
    return;
}