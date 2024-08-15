#include <stdio.h>

int Temperatura(){
    puts("Digite 1 para converter de Fahrenheit para Celsius, e 2 de Celsius para Fahrenheit");
    int op = 0;
    float F;
    float C;
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        puts("Digite o valor de Fahrenheit para converter a Celsius:");
        scanf("%f", &F);
        C = (5.0/9.0)*(F-32);
        printf("%.2f\n", C);
        break;
    
    case 2:
        puts("Digite o valor de Celsius para converter a Fahrenheit:");
        scanf("%f", &C);
        F = (C * 9.0/5.0) + 32;
        printf("%.2f\n", F);
        break;
    
    default:
        puts("Opcao invalida.");
        break;
    }
    return 0;
}

int main(){
    Temperatura();
    return 0;
}
