#include <stdio.h>

void systemClear(){
    system("cls");
}

int main(){
    systemClear();
    int op;
    int tamanhoArray;
    int numArray;
    printf("Bem-vindo aos exercicios de array, qual o tamanho do seu array?\n");
    scanf("%d", &tamanhoArray);

    int array[tamanhoArray];

    for(int i = 0; i < tamanhoArray; i++){
        printf("Digite o %d numero que estara na posicao %d: ", (i+1), i);
        scanf("%d", &numArray);
        array[i] = numArray;
    }
    
    printf("Array inserida: ");
    for(int j = 0; j < tamanhoArray; j++){
        printf("%d ", array[j]);
    }
    printf("\n\n");
    

    while(op != 5){
        printf("\nDigite O que voce deseja fazer com a array, (1)Soma de elementos de um array\n(2)Maior elemento de um array\n(3)Media dos elementos de um array\n(4)Inversao de ordem de um array(De tras pra frente)\n(5)Encerrar programa\n");
        scanf("%d", &op);
        switch (op)
        {
        case 1:
            systemClear();
            int totalCase1 = 0;
    
            for(int k=0; k<tamanhoArray;k++){
                totalCase1 += array[k];
            }
            printf("\no total eh: %d\n\n", totalCase1);
            
            break;

        case 2:
            systemClear();
            int numCase2 = 0;
            for(int x =0; x<tamanhoArray;x++){
                if(numCase2 <= array[x]){
                    numCase2 = array[x];
                }else{
                    numCase2 = numCase2;
                }
            }
            printf("\nO maior numero do array eh: %d\n\n", numCase2);
            break;

        case 3:
            systemClear();
            int totalcase3 = 0;
            for(int z = 0; z<tamanhoArray;z++){
                totalcase3 += array[z]; 
            }
            printf("\nA media da array eh %d\n\n", totalCase1/tamanhoArray);
            break;
        
        case 4:
            systemClear();
            printf("\n\nOrdem correta:\n");
            for(int y = 0; y<tamanhoArray; y++){
                printf("%d ", array[y]);
            }
            printf("\nOrdem Inversa:\n");
            for(int d = (tamanhoArray - 1); d>=0; d--){
                printf("%d ", array[d]);
            }

        case 5:
            break;




        default:
            printf("Numero invalido");
            break;
        }

    }
    
    



}