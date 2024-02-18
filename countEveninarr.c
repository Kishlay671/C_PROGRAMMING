#include<stdio.h>
int countEven(int arr[],int n);

int main(){
    int arr[]={1,2,3,4,5,6,7,8,9};
    printf("%d",countEven(arr,9));
     return 0;
}

int countEven(int arr[],int n){
   int count=0;
   for(int i=0;i<n;i++){
    if(arr[i]%2==0){//Even
        count++;
    }
   }
   return count;
}