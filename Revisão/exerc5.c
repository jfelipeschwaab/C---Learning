#include <stdio.h>
#include<stdlib.h>

void sumMatrixDiagonal() {
  int matrix[3][3];

  int i;
  int j;

  int sum = 0;

  system("cls");

  puts("Programa que calcula a soma da diagonal principal de uma matriz quadrada.");

  for(i=0; i<3; i++) {
    for(j=0; j<3; j++) {
      puts("Digite um número...");
      scanf("%d", &matrix[i][j]);      
    }
  }

  system("cls");

  for(i=0; i<3; i++) {          
      sum += matrix[i][i];      
      fflush(stdin);

      for(j=0; j<3; j++) {
          printf("|%d|", matrix[i][j]);    
      }
    puts("");
  }

  printf("Soma da diagonal principal: %d\n", sum);
}