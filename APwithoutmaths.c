#include<stdio.h>
int main(){
    int a=4,n;
    printf("Enter a number : ");
    scanf("%d",&n);
    //4 7 11 13 17 21....AP upto n number of terms without using maths 
    //using different variable
    for(int i=1;i<=n;i++){
        printf("%d\n",a);
        a=a+3;
    }
    return 0;
}