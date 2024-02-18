#include<stdio.h>
int main(){
    int a,b,q,r;
    printf("Enter 1st number :");
    scanf("%d",&a);
    printf("Enter 2nd number :");
    scanf("%d",&b);
    q=a/b;
    r=a-b*q;
    printf("Remainder is :%d",r);
    return 0;

}