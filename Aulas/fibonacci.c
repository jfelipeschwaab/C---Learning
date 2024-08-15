#include <stdio.h>





int main() {
    int a = 5;

    double curr, prev, *p, temp;
    curr = 1;
    prev = 1;
    p = &curr;

    printf("%.0f,%.0f,", prev, curr);
    for (int i = 0; i < a; i++)
    {
        temp = *p;
        curr += prev;
        prev = temp;
        printf("%.0f,",curr);
        
    }
}