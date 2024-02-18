#include<stdio.h>
float convertTemp(float celsius);

int main(){
    float celsius=30;
    printf("Temperature in fahrenheit is %f",convertTemp(celsius));
    return 0;
}

float convertTemp(float celsius){
    float fahrenheit=1.8*celsius+32;
    return fahrenheit;
}