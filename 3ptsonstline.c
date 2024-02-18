#include<stdio.h>
int main(){
    double x1,x2,x3,y1,y2,y3;
    printf("Enter the valu of x1 : ");
    scanf("%d",&x1);
    printf("Enter the valu of x2 : ");
    scanf("%d",&x2);
    printf("Enter the valu of x3 : ");
    scanf("%d",&x3);
    printf("Enter the valu o f y1 : ");
    scanf("%d",&y1);
    printf("Enter the valu of y2 : ");
    scanf("%d",&y2);
    printf("Enter the valu of y3 : ");
    scanf("%d",&y3);
    double m1=(y2-y1)/(x2-x1),m2=(y3-y2)/(x3-x2);
    if(m1=m2){
        printf("Lies on a straight line");
    }
    else{
        printf("Does not lies on a straight line");
    }
    return 0;
}