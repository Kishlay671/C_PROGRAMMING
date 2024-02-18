//ARRAY IS A POINTER

#include<stdio.h>
int main(){
    int aadhar[5];
    //input
    int *ptr=&aadhar[0];
    for(int i=0;i<5;i++){
        printf("%d index is: ",i);
        scanf("%d",(ptr+i));//  OR  scanf("%d",&aadhar[i]);
    }
    //output
    for(int i=0;i<5;i++){
        printf("%d Index is= %d\n",i,*(ptr+i));// OR printf("%d Index is= %d\n",i,aadhar[i]);
    }
    return 0;
}