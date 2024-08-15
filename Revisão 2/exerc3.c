#include <stdio.h>


int main(){
    float num1;
    printf("Digite um numero para verificar se ele eh inteiro, negativo ou zero\n");
    scanf("%f", &num1);
    printf("\n");
    if(num1 > 0){
        printf("\nPositivo");
    }else if(num1 == 0){
        puts("Zero");
    }else{
        puts("Negativo");
    }
}