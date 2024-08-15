#include <stdio.h>
void systemClear(){
    system("cls");
}
int main(){
    systemClear();
    int op;
    int matriz[2][2] = {{1,2},{3,4}};
    int num;
    for(int i = 0; i<2;i++){
        for(int j = 0; j<2; j++){
            printf("|%d|", matriz[i][j]);
        }
        printf("\n");
    }
    printf("Digite o que deseja fazer com essa matriz, (1)Somar um numero a todos os elementos\n(2)Multiplicar todos os elementos por um numero\n(3)Dividir todos os elementos por um numero\n(4)Subtrair todos os elementos por um numero\n(5)Sair do programa");
    scanf("%d", &op);
    while (op != 5)
    {
        switch (op)
        {
        case 1:
            printf("\n\nDigite um numero para somar a todos os elementos da matriz:\n");
            scanf("%d", &num);
            for(int i = 0; i < 2; i++)
            {
                for(int j = 0; j < 2; j++)
                {
                    matriz[i][j] += num;
                }
                
            }
            for(int i = 0; i<2;i++){
                for(int j = 0; j<2; j++){
                    printf("|%d|", matriz[i][j]);
                }
                printf("\n");
            }
        break;

        case 2:
            printf("\n\nDigite um numero para multiplicar todos os elementos da matriz:\n");
            num = 0;
            scanf("%d", &num);
            for(int i = 0; i < 2; i++)
            {
                for(int j = 0; j < 2; j++)
                {
                    matriz[i][j] *= num;
                }
                
            }
            for(int i = 0; i<2;i++){
                for(int j = 0; j<2; j++){
                    printf("|%d|", matriz[i][j]);
                }
                printf("\n");
            }
            break;

        case 3:
            printf("\n\nDigite um numero para Dividir todos os elementos da matriz:\n");
            num = 0;

            scanf("%d", &num);
            for(int i = 0; i < 2; i++)
            {
                for(int j = 0; j < 2; j++)
                {
                    matriz[i][j] /= num;
                }
                
            }
            for(int i = 0; i<2;i++){
                for(int j = 0; j<2; j++){
                    printf("|%d|", matriz[i][j]);
                }
                printf("\n");
            }
            break;

        case 4:
            printf("\n\nDigite um numero para somar a todos os elementos da matriz:\n");
            num = 0;
            scanf("%d", &num);
            
            for(int i = 0; i < 2; i++)
            {
                for(int j = 0; j < 2; j++)
                {
                    matriz[i][j] -= num;
                }
                
            }
            for(int i = 0; i<2;i++){
                for(int j = 0; j<2; j++){
                    printf("|%d|", matriz[i][j]);
                }
                printf("\n");
            }
            break;
        
        case 5:
            break;
        default:
            break;
        }
    }
}