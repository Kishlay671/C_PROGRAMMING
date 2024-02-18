#include<stdio.h>
int main(){
    /*int marks1=89;
    int marks2=92;
    int marks3=98;*/

    int marks[3];
    printf("Enter science marks : ");
    scanf("%d",&marks[0]);

    printf("Enter maths marks : ");
    scanf("%d",&marks[1]);
    
    printf("Enter english marks : ");
    scanf("%d",&marks[2]);
    
    printf("science=%d,maths=%d,english=%d",marks[0],marks[1],marks[2]);
    return 0;
}