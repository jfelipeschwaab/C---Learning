#include<stdio.h>
#include<string.h>


int main() {
  //1. Creating and Initializing Strings
  char comp[] = {'C','o','m','p','u','t','e','r', '\0'};
  char compCode[] = "Computer Code";

  printf("%s\n", comp);
  printf("%s\n", compCode);

  //2. Character Acess and Modification
  char p[] = "procezzor";

  printf("%c\n", p[2]);

  p[5] = 's';
  p[6] = 's';

  printf("%s\n", p);

  //3. Looping Through Strings
  char s[] = "When the zombies arrive, quickly fax Judge Pat Alphabet";
  char p[] = "poolloop";  
  for(int i=0; i<strlen(s); i++){
    s[i] = '*';
  }
  printf("%s\n", s);
  for (int j = 0; j < strlen(p)/2; j++){
    p[j] = '#';
  }
  
  printf("%s", p);

  //4. Concatenating Strings
  char s1[] = "London";
  char s2[] = " Bridge";

  strcat(s1,s2);
  printf("s1: %s", s1);

  char n[] = "New";
  char y[] = " York";
  char c[] = " City";

  strcat(n,y);
  strcat(n,c);
  printf("%s", n);

  //5. Copying Strings
  char src[] = "banana";
  char dst[7];
  
  char pan[] = "How vexingly quick daft zebras jump!";
  int len = strlen(pan) + 1; 
  char dst2[len];

  strcpy(dst2, pan);
  
  strcpy(dst, src);
  
  printf("%s\n", dst);  
  
  strcpy(dst2, pan);
  
  printf("%s", dst2);

}