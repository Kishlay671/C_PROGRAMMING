#include<stdio.h>
int main(){
    int arr[2][3][2];
    printf("Enter the 12 values : \n");
    for(int i=0;i<2;++i){
        for(int j=0;j<3;++j){
            for(int k=0;k<2;++k){
                scanf("%d",&arr[i][j][k]);
            }
        }
    }
    printf("\n The displaying values are: \n");
    for(int i=0;i<2;++i){
        for(int j=0;j<3;++j){
            for(int k=0;k<2;++k){
                printf("arr[%d][%d][%d]=%d\n",i,j,k,arr[i][j][k]);
            }
        }
    }
    return 0;
}