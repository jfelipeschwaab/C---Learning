#include<stdio.h>
#include<string.h>
 
void copy(char* dst, char* src) {
  while (*src != '\0') {
    *dst = *src; 
    src++;        
    dst++;        
  }
  *dst = '\0'; 
}
 
int main(){
  // char srcString[] = "We promptly judged antique ivory buckles for the next prize!";

  // char dstString[strlen(srcString) + 1];
  // copy(dstString, srcString);
  // printf("%s", dstString);
  int x = 1;
for (int i = 0; i < 5; i++) {
    for (int j = 0; j < i; j++) {
        x += i + j;
    }
}
printf("%d", x);

int i = 1;
for (int j = 2; j < 6; j++) {
    for (int k = 1; k < j; k++) {
        i *= k;
    }
}
 printf("%d", i);

}