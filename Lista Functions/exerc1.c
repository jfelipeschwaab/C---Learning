#include <stdio.h>

void valorNulo(int num){
    if(num == 0){
        printf("Valor nulo\n");
    }else if(num > 0){
        printf("Valor positivo\n");
    }else{
        printf("Valor negativo\n");
    }
}

int main(){
    int num = 0;
    printf("Digite um numero para verificar se eh nulo, positivo ou negativo\n");
    scanf("%d", &num);
    valorNulo(num);
}