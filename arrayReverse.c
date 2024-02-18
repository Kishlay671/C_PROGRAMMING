#include<stdio.h>
int reverseArr(int arr[],int n);
void printArr(int arr[],int n);

int main(){
    int arr[]={1,2,3,4,5};
    reverseArr(arr,5);
    printArr(arr,5);
    return 0;
}

void printArr(int arr[],int n){
    for(int i=0;i<n;i++){
        printf("%d\t",arr[i]);
    }
    printf("\n");
}

int reverseArr(int arr[],int n){
    for(int i=0;i<n/2;i++){
        int firstvalue=arr[i];
        int secondvalue=arr[n-i-1];
        arr[i]=secondvalue;
        arr[n-i-1]=firstvalue;
    }
}