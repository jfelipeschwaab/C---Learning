#include <stdio.h>
void systemClear(){
    system("cls");
}
int main(){
    systemClear();
    int quadrado;
    printf("Digite um numero para calcular seu quadrado\n");
    scanf("%d", &quadrado);
    printf("%d^2 = %d", quadrado, quadrado*quadrado);
}