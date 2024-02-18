#include<stdio.h>
float calPercentage(int science,int maths,int sanskrit);

int main(){
    int science=89;
    int maths=92;
    int sanskrit=98;
    printf("Percentage is %f",calPercentage(science,maths,sanskrit));
    return 0;
}

float calPercentage(int science,int maths,int sanskrit){
    float percentage=((science+maths+sanskrit)/3);
    return percentage;
}