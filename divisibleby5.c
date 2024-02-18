#include<stdio.h>
int main(){
    int x;
    printf("Enter a Number : ");
    scanf("%d",&x);
    if(x%5==0){
        printf("Number is Divisible by 5");
    }
    else{
        printf("Number is not Divisible by 5");
    }
    return 0;
}