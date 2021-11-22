#include<stdio.h>
#include"my_mat.h"

void main(){
    char c=' ';
    int arr [10][10];
    while(c!='D'){
        
        printf(" Enter A for function number 1"
        "\n Enter B for function number 2"
        "\n Enter C for function number 3"
        "\n Enter D to exit");
        scanf("%c",&c);
        if(c=='A') 
            Afunction(arr);
        else if (c=='B')
            Bfunction(arr);
            else Cfunction();
        
    }
    
}