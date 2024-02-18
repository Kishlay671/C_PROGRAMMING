#include<stdio.h>
void storeTable(int arr[][10],int m,int n,int number);

int main(){
    int table[2][10];
    storeTable(table,0,10,2);
    storeTable(table,1,10,3);
    for(int i=0;i<10;i++){
        printf("%d\t",table[0][i]);
    } 
    printf("\n");
    for(int i=0;i<10;i++){
        printf("%d\t",table[1][i]);
    }
    printf("\n");
    return 0;
}

void storeTable(int arr[][10],int m,int n,int number){
    for(int i=0;i<n;i++){// 0 to 10
        arr[m][i]=number*(i+1);// 2 4 6 8 10.....
    }
}