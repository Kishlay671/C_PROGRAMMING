#include<stdio.h>
int fact(int n);

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Factorial is %d",fact(n));
    return 0;
}

int fact(int n){
    if(n==1){
        return 1;
    }
    int factNm1=fact(n-1);
    int factN=factNm1*n;
    return factN;
}