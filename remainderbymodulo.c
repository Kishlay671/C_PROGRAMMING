#include<stdio.h>
int main(){
    int a,b,r;
    printf("Enter dividend :");
    scanf("%d",&a);
    printf("Enter divisor :");
    scanf("%d",&b);
    r=a%b;
    printf("The Remainder is :%d",r);
    return 0;
}