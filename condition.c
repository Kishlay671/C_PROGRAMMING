#include<stdio.h>
int main(){
    int x;
    printf("Enter a Number : ");
    scanf("%d",&x); 
    if(x>5){
        printf("Number is Greater than 5");
    }
    if(x<5);{
        printf("Number is less than 5");
    }
    if(x==5){
        printf("Number is equal to 5");
    }
    return 0;
}