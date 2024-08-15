#include <stdio.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

int main(){
    int contPar = 0;
    int contImpar = 0;
    int i;
    int num;
    printf("Quantos numeros voce deseja contar se sao pares ou impares?\n");
    scanf("%d", &num);
    int numeros[num];
    num = 0;

    for (i = 0; i < sizeof(numeros)/sizeof(numeros[0]); i++)
    {
        printf("Digite o numero %d\n", i+1);
        scanf("%d", &num);
        numeros[i] = num;
        if(num % 2 == 0){
            contPar++;
        }else{
            contImpar++;
        }
        num = 0;
    }

    printf("Numeros pares: %d\nNumeros impares:%d", contPar,contImpar);
    
}