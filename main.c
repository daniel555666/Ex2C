#include<stdio.h>
#include"my_mat.h"

int main(){
    char c=' ';
    int arr [10][10]={0};
    while(c!='D'){

        scanf("%c",&c);
        if(c=='A'){ 
            Afunction(arr);
        }
        else if (c=='B'){
            Bfunction(arr);
        }
            else if (c=='C') 
             Cfunction();
           
    
    }
    return 0;
}