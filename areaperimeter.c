#include<stdio.h>
int main(){
    int A,P,l,b;
    printf("Enter Length of Rectangle : ");
    scanf("%d",&l);
    printf("Enter Bredth of Rectangle : ");
    scanf("%d",&b);
    A=l*b;
    P=2*(l+b);
    if(A>P){
        printf("Area is Greater than Perimeter");
    }
    else{
        printf("Area is not Greater than Perimeter");
    }
    return 0;
}