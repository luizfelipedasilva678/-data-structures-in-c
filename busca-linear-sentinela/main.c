#include<stdio.h>
#define TAM 11

int buscaLinearSentinela(int v[], int n) {
    int i = 0;

    while(v[i] != n) {
        i++;
    }

    if(i == TAM - 1) {
        return -1;
    } else {
        return i;
    }
}

int main(void) {
    int v[TAM] = {1,2,3,4,5,70,7,8,9,10,70};

    printf("%d", buscaLinearSentinela(v, 70));

    return 0;
}