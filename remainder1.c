#include<stdio.h>
int main(){
    int a,b,q,r;
    printf("Enter dividend :");
    scanf("%d",&a);
    printf("Enter divisor :");
    scanf("%d",&b);
    q=a/b;
    r=a-b*q;
    printf("The Remainder when %d is Divided by %d is :%d",a,b,r);
    return 0;

}