#include<stdio.h>
//prototype/declaration
void printHello();
void printGoodBye();

int main(){//function call
        printHello();
        printGoodBye();
    return 0;
}

//function definition
void printHello(){
    printf("Hello!\n");
}

void printGoodBye(){
    printf("Good Bye\n");
}