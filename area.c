#include<stdio.h>
float rectangleArea(float a,float);
float squareArea(float side);
float circleArea(float rad);

int main(){
    float a=5.0;
    float b=4.0;
    printf("Area of Rectangle is %f\n",rectangleArea(a,b));
    float side=1.1;
    printf("Area of Square is %f\n",squareArea(side));
    float rad=8.0;
    printf("Area of circle is %f\n",circleArea(rad));
    return 0;
}

float rectangleArea(float a,float b){
    return a*b;
}

float squareArea(float side){
    return side*side;
}

float circleArea(float rad){
    return 3.14*rad*rad;
}