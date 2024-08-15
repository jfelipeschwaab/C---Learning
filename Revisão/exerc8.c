#include <stdio.h>
void systemClear(){
    system("cls");
}
int main(){
    systemClear();
    int n1, n2 = 0;
    printf("Digite dois numeros para executar a multiplicacao deles.\n\n");
    scanf("%d\n", &n1);
    scanf("%d", &n2);
    printf("\n%d x %d = %d", n1, n2, n1*n2);


}