#include<stdio.h>
void calculatePrice(float value);

int main(){
    float value=100.0;
    calculatePrice(value);
    printf("value is :%f\n",value);//value remain same shows changes to parameter in function don't change the value in calling function
    return 0;
}

void calculatePrice(float value){
    value=value+(0.18*value);
    printf("Final price is : %f\n",value);
}