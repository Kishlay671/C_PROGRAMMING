#include<stdio.h>
int main(){
    int x;
    printf("Enter Marks : ");
    scanf("%d",&x);
    /*if(x>=80){
        printf("A Grade");
    }
    else if(x>=60){
        printf("B Grade");
    }
    else if(x>=40){
        printf("C Grade");
    }
    else{
        printf("D Grade");
    }*/
    x>=30 ? printf("Pass \n") : printf("Fail");
    return 0;
}