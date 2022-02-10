#include<stdio.h>
#define TAM 10


void bubbleSort(int v[]) {
    int trocou = 1, aux = 0;

    while(trocou == 1) {
        trocou = 0;
        for(int i = 1; i < TAM; i++) {
            if(v[i] < v[i - 1]) {
                aux = v[i];
                v[i] = v[i - 1];
                v[i - 1] = aux;
                trocou = 1;
            }
        }
    }
}

int main(void) {

    int v[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1}, i = 0;

    bubbleSort(v);

    for(i; i < TAM; i++) {
        printf("%d\n", v[i]);
    }

    return 0;
}
