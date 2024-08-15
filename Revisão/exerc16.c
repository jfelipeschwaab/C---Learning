#include <stdio.h>
#include <stdlib.h>

void countVowels() {
  char string[50];
  int vowelsAmount = 0;

  puts("Programa que conta a quantidade de vogais");
  puts("Digite algo...");
  scanf("%s", string);
  fflush(stdin);  


  int i;

  for (i = 0; i < strlen(string); i++) {
    if (string[i] == 'a' || string[i] == 'e' || string[i] == 'i' || string[i] == 'o' || string[i] == 'u' ||
      string[i] == 'A' || string[i] == 'E' || string[i] == 'I' || string[i] == 'O' || string[i] == 'U') {          
      vowelsAmount += 1;
    }
  }

  printf("%s possui %d vogais\n", string, vowelsAmount);
}