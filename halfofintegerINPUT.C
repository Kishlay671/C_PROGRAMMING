#include<stdio.h>
int main(){
    float x;
    printf("Enter a decimal number :");
    scanf("%f",&x);
    int y=x;
    printf("Integer part of number is :%d\n",y);
    float z=x-y;
    printf("Decimal part of number is :%2.3f",z);
    return 0;
}