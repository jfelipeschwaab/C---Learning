#include <stdio.h>

int main(){
    int matriz[2][2] = {{1,2}, {3,4}};
    int matriz2[2][2] = {{5,6}, {7,8}};
    int matrizResultado[2][2];


    for(int i=0;i<2;i++){
        for(int j=0; j<2;j++){
            matrizResultado[i][j] = matriz[i][j] + matriz2[i][j];
            printf("|%d| + |%d| = |%d|",matriz[i][j],matriz2[i][j], matrizResultado[i][j]);
            
        }
        printf("\n");
    }
    printf("O resultado eh:\n");
    for(int i=0;i<2;i++){
        for(int j=0; j<2;j++){
            printf("|%d|",matrizResultado[i][j]);
            
        }
        printf("\n");
    }




}