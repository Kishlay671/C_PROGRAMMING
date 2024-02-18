#include<stdio.h>
void printHW(int count);

int main(){
    printHW(9);
    return 0;
}
//recursive function
void printHW(int count){
    if(count==0){
        return;
    }
    printf("Hello World\n");
    printHW(count-1);
}