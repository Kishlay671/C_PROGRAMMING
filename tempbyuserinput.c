#include<stdio.h>
float convertTemp(float celsius);

int main(){
    float n;
    printf("Enter temperature in celsius : ");
    scanf("%f",&n);
    printf("Temperature in Fahrenheit is %f",convertTemp(n));
    return 0;
}

float convertTemp(float celsius){
    float fahrenheit=1.8*celsius+32;
    return fahrenheit;
}