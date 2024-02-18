#include<stdio.h>
int main(){
    int age=22;
    int _age=23;
    int *ptr=&age;
    int *_ptr=&_age;
    //pointers whose difference are to be taken should must be of same types i.e int or float or char
    printf("difference=%u\n",ptr-_ptr);//difference will of data type
    _ptr=&age;
    printf("comparison=%u\n",_ptr==ptr);
    return 0;
}