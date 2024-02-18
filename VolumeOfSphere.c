/*#include<stdio.h>
int main(){
    int r=5,v;
    v=4*3.14*r*r*r/3;
    printf("The Volume of Sphere is:%d",v);
    return 0;
}*/


/*#include<stdio.h>
int main(){
    int r=5;
    float v=4*3.14*r*r*r/3;
    printf("The Volume Of Sphere is:%f",v);
    return 0;
    
}*/


#include<stdio.h>
int main(){
    float r,v;
    printf("Enter radius of sphere : ");
    scanf("%f",&r);
    v=4*3.14*r*r*r/3;
    printf("The Volume of Sphere is:%f",v);
    return 0;
}