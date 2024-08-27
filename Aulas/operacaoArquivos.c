#include <stdio.h>


int main(){
    FILE *arq;
    arq = fopen("arquivOweldes.txt", "r");
    int c;

    char nome[10], *resultado;



    if(arq){
        printf("Arquivo existe\n");
    }else{
        printf("Arquivo não existe\n");
    }

    

    if(arq){
        while(!feof(arq)){
            resultado = fgets(nome, 10, arq);
            if(resultado){
                printf("%s", nome);
            }
        }
    }
    // fprintf(arq, "Eu consegui digitar no arquivo!\n");
    fclose(arq);
    return 0;
}