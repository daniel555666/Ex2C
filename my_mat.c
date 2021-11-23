#include<stdio.h>
#include<math.h>
void Floyd_algorithm(int arr [][10]);

void Afunction(int arr[][10]){

    for(int i=0;i<10;i++){
        for(int j=0;j<10;j++){
            int x;
            scanf("%d",&x);
            if(x==0)arr[i][j]=-10;
            else arr[i][j]=x;
        }
    }
    Floyd_algorithm(arr);
    
}

void Bfunction(int arr [][10]){
    int i=0;
    int j=0;
    scanf("%d%d",&i,&j);
    if (arr[i][j]!=-10){
        printf("True");
    }
    else {
        printf("False");  
    }  
}

void Cfunction(int arr[][10]){
    int i=0;
    int j=0;
    scanf("%d%d",&i,&j);
    if (arr[i][j]!=-10)
        printf("%d",arr[i][j]);
    else 
        printf("-1");
}

void Floyd_algorithm(int arr [][10]){
    for(int k=1;k<10;k++)
        for(int i=0;i<10;i++)
            for(int j=0;j!=i&&j<10;j++)
                if(arr[i][j]==-10&&arr[i][k]!=-10&&arr[k][j]!=-10)
                    arr[i][j]=arr[i][k]+arr[k][j];
                else if (arr[i][j]>arr[i][k]+arr[k][j])
                    arr[i][j]=arr[i][k]+arr[k][j];
                
}