#include<stdio.h>
/*int main(){
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    if(x%5==0 || x%3==0){
        if(x%15!=0){
            printf("Number is divisible by 5 or 3 but not 15");
        }
        else{
            printf("Number is divisible by 15");
        }
    }
    else{
        printf("Nimber is not divisible by 5 and 3");
    }
    return 0;
}*/


int main(){
    int x;
    printf("Enter a number : ");
    scanf("%d",&x);
    if((x%5==0 || x%3==0) && x%15!=0){
        printf("Number is divisible by 5 or 3 but not 15");
    }
    else{
        printf("Number is not matching the required condition");
    }
    return 0;
}
