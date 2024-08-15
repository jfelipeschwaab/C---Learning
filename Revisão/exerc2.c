#include <stdio.h>
void systemClear(){
    system("cls");
}
int main(){
    systemClear();
    float n1 = 0;
    float n2 = 0;
    float n3 = 0;
    float soma = 0;


    printf("Digite a primeira nota do aluno: \n\n");
    scanf("%f", &n1);
    printf("\n\nDigite a segunda nota do aluno:\n\n");
    scanf("%f", &n2);
    printf("\n\nDigite a terceira nota do aluno:\n\n");
    scanf("%f", &n3);
    
    soma = n1 + n2 + n3;
    soma /= 3;

    if(soma<6){
        printf("\n\nMedia total: %.2f\n\nREPROVADO!", soma);
    }
    else{
        printf("\n\nMedia total: %.2f\n\nAPROVADO!", soma);
    }

}