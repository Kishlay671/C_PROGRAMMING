#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int r=0;
    while(n>0){
        r=r*10;
        r=r+(n%10);
        n=n/10;
    }
    printf("The reverse of number is %d\n",r);
    int x=n+r;
    printf("The sum of number and reverse of it is %d",x);
    return 0;
}

//some issue in code