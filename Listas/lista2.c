#include <stdio.h>
#include <stdlib.h>
#include <time.h>
void systemClear(){
    system("cls");
}
int main(){
    systemClear();
    int numCase1 = 0;
    int numCase2 = 0;
    int op = 0;
    int curr = 1;
    int prev, durante = 0;
    float C,F = 0;
    float fahrenheit, celsius = 0;
    int opCase3;
    int numero_aleatorio, tentativa, contador_tentativas = 0;
    float media, num, total = 0;
    int contagem = 0;
    int numCase6, contador = 0;
    int numCase7, pot, resultado = 0;
    resultado = 1;
    float money, taxa = 0;
    float nota = 0;
    int peso = 0;
    int opCase9 = 0;
    float totalMedia = 0;
    int contagemCase9 = 0;
    
    srand(time(0));
    printf("Digite o exercicio que vc deseja realizar\n(1)Verificacao de Numeros primos\n(2)Serie de fibonacci\n(3)Conversor de temperatura\n(4)Jogo da advinhacao\n(5)Media de numeros\n(6)Contador de digitos\n(7)Descobrir potencia\n (8)Conversor de moeda\n(9)Media ponderada\n");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
        printf("\ndigite um numero para verificar se eh primo\n");
        scanf("%d", &numCase1);
        for(int i = 2; i<=numCase1; i++){
            if(numCase1%i == 0 && i !=numCase1){
                printf("\nnumero nao primo");
                break;
            }else if(numCase1 == i && numCase1%i ==0){
                printf("\nnumero primo");
            }
        }
        break;
    
    case 2:
        printf("\ndigite um numero para obter os primeiros numeros do fibonacci\n");
        scanf("%d", &numCase2);
        printf("0,");
        for(int x = 0; x<numCase2; x++){
            printf("%d,",curr);
            durante = prev;
            prev = curr;
            curr = curr + durante;
        }

        break;


    case 3:
        printf("\nDigite 1 para passar de celsius para fahrenheit, digite 2 para obter de fahrenheit para celsius\n");
        scanf("%d", &opCase3);

        switch(opCase3){
        case 1:
            puts("Digite os graus em celsius");
            scanf("%f", &C);
            fahrenheit = C * 9/5 + 32;
            printf("A temperatura em fahrenheit eh %.2f", fahrenheit );
            break;

        case 2:
            puts("Digite os graus em fahrenheit");
            scanf("%f", &F);
            celsius = (F - 32) * 5/9;
            printf("%.2f", celsius);
            break;

        default:
            printf("Escolha nao eh possivel");
            break;

        break;
   }
   
    case 4:
        numero_aleatorio = rand() % 100 + 1;

        printf("Bem-vindo ao jogo de adivinhacao!\n");
        printf("Tente adivinhar o numero entre 1 e 100.\n");

        do {
            printf("Digite sua tentativa: ");
            scanf("%d", &tentativa);
            contador_tentativas++;

        
            if (tentativa < numero_aleatorio) {
                printf("Tente um numero maior.\n");
            } else if (tentativa > numero_aleatorio) {
                printf("Tente um numero menor.\n");
            } else {
                printf("Parabens! Voce acertou o numero em %d tentativas.\n", contador_tentativas);
            }   
        } while (tentativa != numero_aleatorio);

        break;


    case 5: 
        puts("Digite a quantidade de numeros que voce deseja fazer media");
        scanf("%d", &contagem);

        for(int y = 1; y<=contagem; y++){
            printf("Digite o %d° numero\n", y);
            scanf("%f", &num);
            total+=num;     
        }
        media = total/contagem;
        printf("%.2f", media);


    case 6:
        puts("Digite um numero para obter a quantidade de digitos que ha");
        scanf("%d", &numCase6);

        while (numCase6 > 0)
        {
            numCase6 = numCase6/10;
            contador++;
        }
        printf("\n ha %d digitos nesse numero", contador);  


    case 7:
        puts("Bem-vindo ao calculador de potencia, digite uma base, e logo em seguida, em que potencia voce deseja calcular-la");
        scanf("%d", &numCase7);
        scanf("%d", &pot);

        for (int z =1; z<=pot; z++){
            resultado *= numCase7;
        }
        printf("\n%d\n", resultado);

        break;


    case 8:
        puts("Digite a quantidade que voce deseja e a taxa de conversao");
        scanf("%f", &money);
        scanf("%f", &taxa);
        printf("\n%f\n", money*taxa);


    case 9:
        while(opCase9 != 2){
            puts("Digite 1 para entrar notas na media ponderada e seu peso, 2 para sair do programa");
            scanf("%d", &opCase9);
            switch (opCase9)
            {
            case 1:
                puts("Digite a nota e o peso");
                scanf("%f", &nota);
                scanf("%d", &peso);
                totalMedia += nota*peso;
                contagemCase9++;
                break;

            case 2:
                printf("\nMedia ponderada eh: %.2f\n", totalMedia/contagemCase9);
                break;
            
            default:
                break;
            }
        }


    default:
        break;
    }







}