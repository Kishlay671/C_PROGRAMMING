#include<stdio.h>
int main(){
    int radius;
    float PI=3.14,A;
    printf("Enter Radius Of circle:");
    scanf("%d",&radius);
    A=PI*radius*radius;
    printf("Area Of Circle is:%f",A);
    return 0;
}