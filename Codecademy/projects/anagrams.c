#include<stdio.h>
#include<string.h>
int main() {
int counter1[] = {0,0,0,0};
int counter2[] = {0,0,0,0};

char s1[] = {"dbb cccccaacb cdbababdcdcdab dcdad"};
char s2[] = {"bbbcc bdddccccad cdbbaaacaccdabdd"};

for(int i = 0; i < strlen(s1); i++){
if(s1[i] == 'a' ){
  counter1[0] += 1;
}
if (s1[i] == 'b' ){
  counter1[1] += 1;
}
if (s1[i] == 'c' ){
  counter1[2] += 1;
}
if (s1[i] == 'd' ){
  counter1[3] += 1;
}

}

for(int i = 0; i < strlen(s2); i++){
if(s1[i] == 'a' ){
  counter2[0] += 1;
}
if (s1[i] == 'b' ){
  counter2[1] += 1;
}
if (s1[i] == 'c' ){
  counter2[2] += 1;
}
if (s1[i] == 'd' ){
  counter2[3] += 1;
}

}

int flag = 0 ;

for (int j = 0; j<=sizeof(counter1); j++){
  if(counter1[j] != counter2[j]){
    flag = 1;
  }
}

if(flag == 0){
  printf("Anagram!");
}else{
  printf("Not Anagram!");
}


}