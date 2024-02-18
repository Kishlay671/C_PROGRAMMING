#include<stdio.h>
int main(){
    int age=20;
    int *ptr=&age;
    printf("ptr=%u\n",ptr);
    ptr++;
    printf("ptr=%u\n",ptr);
    ptr--;
    printf("ptr=%u\n",ptr);
    return 0;
}