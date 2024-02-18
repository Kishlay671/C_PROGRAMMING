#include<stdio.h>
void printNumbers(int arr[],int n);//OR void printNumbers(int *ptr,int n);

int main(){
    int arr[]={1,2,3,4,5,6};
    printNumbers(arr,6);
    return 0;
}

void printNumbers(int arr[],int n){//OR void printNumbers(int *arr,int n)
    for(int i=0;i<n;i++){
        printf("%d \t",arr[i]);
    }
    printf("\n");
}