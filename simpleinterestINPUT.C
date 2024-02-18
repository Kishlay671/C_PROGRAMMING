#include<stdio.h>
int main(){
    float principal,rate,time,SI;
    printf("Enter Principal : ");
    scanf("%f",&principal);
    printf("Enter Rate : ");
    scanf("%f",&rate);
    printf("Enter Time : ");
    scanf("%f",&time);
    SI=principal*rate*time/100;
    printf("Your Simple Interest is :%f",SI);
    return 0;
}