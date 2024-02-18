#include<stdio.h>
int main(){
    int arr[]={1,2,3,4,5};
    printf("%d\n",*(arr+2));
    printf("%d\n",*(arr+5));
    return 0;
}