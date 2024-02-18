#include<stdio.h>
void Namaste();
void Bonjour();

int main(){
    printf("Enter f for French and i for Indian : ");
    char ch;
    scanf("%c",&ch);
    if(ch=='i'){
        Namaste();
    }
    else if(ch=='f'){
        Bonjour();
        }
    else{
        printf("Different alphabet");
    }
    return 0;
}


void Namaste(){
    printf("Namaste\n");
}
void Bonjour(){
    printf("Bonjour\n");
}