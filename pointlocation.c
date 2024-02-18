#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the coordinates :");
    scanf("%d %d",&x,&y);
    if(x==0 && y==0){
        printf("Lies on origin");
    }
    else if(x==0){
        printf("Lies on y-axis");
    }
    else if(y==0){
        printf("Lies on x-axis");
    }
    else{
        printf("point does not lies on x and y axis");
    }
    return 0;
}