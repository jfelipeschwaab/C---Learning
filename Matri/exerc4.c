#include <stdio.h>
#include <stdlib.h>

void systemClear(){
    system("cls");
}
int main(){
    systemClear();
    int matriz[3][3] = {{1,2,3},{4,5,6},{7,8,9}};
    int numUser = 0;
    int matrizResultado[3][3];
    
    puts("Essa eh a matriz inicial: digite um valor para multiplica-la inteiramente");
    for(int y = 0; y<3 ; y++){
        for(int z=0;z<3;z++){
            printf("|%d|", matriz[y][z]);
        }
        printf("\n");
    }
    printf("\n");
    scanf("%d", &numUser);

    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            matrizResultado[i][j] = matriz[i][j] * numUser;
        }
    }

    printf("\n\nImprimindo o resultado:\n");
    for(int y = 0; y<3 ; y++){
        for(int z=0;z<3;z++){
            printf("|%d|", matrizResultado[y][z]);
        }
        printf("\n");
    }




} 