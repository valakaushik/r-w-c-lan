#include<stdio.h>
// 6
int main(){
    
    int i,j;

    for(i=5;i>=1;i--){
        for(j=i;j>=1;j--){
            if((i+j)%2==0){
                printf(" 1");
            }else{
                printf(" 0");
            }
        }
        printf("\n");
    }


    return 0;
}