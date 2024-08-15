#include <stdio.h>

int main() {
  int numbers[10];

  system("cls");
  puts("Programa que coleta 10 números e só exibe os positivios");

  int i;
  for(i=0; i<10; i++) {
    printf("Digite o valor %d\n", i+1);
    scanf("%d", &numbers[i]);
  }

  system("cls");
  printf("Resultado: ");
  for(i=0; i<10; i++) {
    int currentNumber = numbers[i];
    if(currentNumber >= 0) {
      printf("|%d|", numbers[i]);
    }
  }
}
