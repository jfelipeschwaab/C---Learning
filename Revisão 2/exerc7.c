#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int vetores[10];
    int maior = 0;
    int num;
    printf("Lendo 10 numeros, armazenando-os em um vetor, e encontrando o maior:\n");
    for (int i = 0; i < sizeof(vetores)/sizeof(vetores[0]); i++)
    {
        printf("Digite o numero %d\n", i+1);
        scanf("%d", &num);
        if(maior < num){
            maior = num;
        }else{
            maior = maior;
        }
    }
    printf("O maior numero eh: %d", maior);
    
}