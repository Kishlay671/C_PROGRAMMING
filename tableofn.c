#include<stdio.h>
int sum(int a,int b);
void printTable(int n);

int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printTable(n);//argument or actual parameter
    return 0;
}

int sum(int a,int b){
    return a+b;
}

void printTable(int n){//here n is parameter or formal parameter
    for(int i=1;i<=10;i++){
        printf("%d\n",i*n);
    }
}