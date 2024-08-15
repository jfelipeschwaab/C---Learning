#include <stdio.h>

int main(){
    int matriz[3][3];

    for(int i = 0; i<3;i++){
        for(int j=0; j<3;j++){
            printf("Digite o %d numero da coluna  da %d linha ", (j+1), (i+1));
            scanf("%d", &matriz[i][j]);
        }
    }

    for(int y = 0; y<3 ; y++){
        for(int z=0;z<3;z++){
            printf("|%d|", matriz[y][z]);
        }
        printf("\n");
        printf("\n");
    }

    
    
    
}