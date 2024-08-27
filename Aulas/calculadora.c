#include <stdio.h>

void calculadora(int op, float *n1, float *total) {
    switch (op) {
    case 1:
        printf("Quanto voce deseja adicionar? ");
        scanf("%f", n1);
        *total += *n1;
        break;

    case 2:
        printf("Quanto voce deseja multiplicar? ");
        scanf("%f", n1);
        *total *= *n1;
        break;

    case 3:
        printf("Quanto voce deseja dividir? ");
        scanf("%f", n1);
        if (*n1 != 0) {
            *total /= *n1;
        } else {
            printf("Erro: Divisao por zero.\n");
        }
        break;

    case 4:
        printf("Quanto voce deseja subtrair? ");
        scanf("%f", n1);
        *total -= *n1;
        break;

    default:
        printf("Operacao inválida.\n");
        break;
    }
}

int main() {
    int op;
    float num, total = 0;
    printf("\n\n%.2f\n\n\n", total);
    while (1) {

        printf("Qual operacao voce deseja realizar?\n(1) Adicao\n(2) Multiplicacao\n(3) Divisao\n(4) Subtracao\n(5) Sair do programa\n\n\n");
        scanf("%d", &op);

        if (op == 5) {
            break;
        }

        calculadora(op, &num, &total);
        printf("\n\nResultado atual: %.2f\n\n", total);

        
    }

    printf("Programa encerrado.\n");
    return 0;
}
