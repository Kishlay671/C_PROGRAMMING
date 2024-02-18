#include<stdio.h>
float calPercentage(int science,int maths,int sanskrit);

int main(){
    int science;
    printf("Enter science marks: ");
    scanf("%f",&science);
    int maths;
    printf("Enter maths marks : ");
    scanf("%f",&maths);
    int sanskrit;
    printf("Enter sanskrit marks :");
    scanf("%f",&sanskrit);
    float n;
    printf("Percentage is %f",calPercentage(n));
    return 0;
}

float calPercentage(int science,int maths,int sanskrit){
    float percentage=((science+maths+sanskrit)/3)*100;
    return 0;
}