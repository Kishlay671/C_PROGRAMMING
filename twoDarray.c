#include<stdio.h>
int main(){
    //2 x 3
    int marks[2][3];//_ _ _|_ _ _
    marks[0][0]=90;
    marks[0][1]=89;
    marks[0][2]=78;

    marks[1][0]=90;
    marks[1][1]=89;
    marks[1][2]=78;

    printf("%d",marks[1][0]);

    return 0;
}