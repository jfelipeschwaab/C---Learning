#include <stdio.h>
#include <stdlib.h>

void systemClear(){
    system("cls");
}

int main(){
    systemClear();
    int matriz[4][4]= {{1,2,3,4}, {5,6,7,8}, {9,10,11,12},{13,14,15,16}};
    int soma = 0;

    for(int i = 0;i<4;i++){
        printf("Imprimindo soma da linha %d\n", (i+1));
        for(int j = 0;j<4;j++){
            soma += matriz[i][j];
        }
        printf("total linha %d = %d\n",(i+1), soma);
        soma = 0;
    }
    printf("\n\n");
    for(int i = 0;i<4;i++){
        printf("Imprimindo soma da coluna %d\n", (i+1));
        for(int j = 0;j<4;j++){
            soma += matriz[j][i];
        }
        printf("total coluna %d = %d\n",(i+1), soma);
        soma = 0;
    }
    



}