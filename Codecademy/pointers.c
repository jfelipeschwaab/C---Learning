#include <stdio.h>

int main() {

    //1. Pointers
    double dblVar;
    double *dblPtr = &dblVar;
    printf("%p\n", dblPtr);


    //2. The Reference Operator
    double g = 9.81;
    double pi = 3.14;

    dblPtr = &g;
    printf("%p\n", dblPtr);
    dblPtr = &pi;
    printf("%p\n", dblPtr);


    //3. The Dereference Operator
    int k = 2000;
    int *ptr = &k;

    printf("%d\n", *ptr); //é printado o valor de K, com o * eu consigo acessar o valor que o ponteiro está apontando

    *ptr = 961; //Aqui mudei o valor que o ponteiro apontava por meio do Dereference Operator '*', agora K vale 961

    printf("%d\n", *ptr); 

    //4. Pointer Arithmetic
    double *ptr1;
    ptr1 += 5;
    ptr1 -= 4;

    //5. Pointers & arrays
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    char s[] = "Farmer Jack realized that big yellow quilts were expensive!!";

    int *ptr = &arr[9];

    for(int i = 0; i < 10; i++){
    printf("%i\n", *ptr);
    *ptr--;
    }


    char *ptr2 = &s[0];

    for(int i = 0; i < strlen(s); i++){
    *ptr2 = '#';
    *ptr2++;
    }

    printf("%s\n", s); 

}