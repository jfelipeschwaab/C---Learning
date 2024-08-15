#include <stdio.h>


int main(){
    float num1, num2 = 0;
    printf("Digite dois numeros inteiros para que seja realizado a soma entre eles e a divisao\n");
    scanf("%f", &num1);
    printf("\n");
    scanf("%f", &num2);
    printf("Soma: %.2f + %.2f = %.2f\nDivisao: %.2f / %.2f = %.2f", num1, num2, num1 + num2, num1, num2, num1/num2);

}