#include<stdio.h>
int main(){
    int n;
    printf("Enter the required term : ");
    scanf("%d",&n);
    int a=1,b=1;
    int sum=1;
    printf("The 1st fibonacci is 1\n");
    printf("The 2st fibonacci is 1\n");
    for(int i=1;i<=n-2;i++){
        sum=a+b;
        a=b;
        b=sum;
        printf("The %dth fibonacci is :%d\n",i+2,sum);
    }
    return 0;
}