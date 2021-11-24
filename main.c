#include<stdio.h>
#include"my_mat.h"
int arr[10][10];
int main(){
    char c=' ';
    while(c!='D'){

        scanf("%c",&c);
        if(c=='A'){ 
            Afunction(arr);
        }
        else if (c=='B'){
            Bfunction(arr);
        }
            else if (c=='C') 
             Cfunction(arr);
    
    }
    return 0;
}