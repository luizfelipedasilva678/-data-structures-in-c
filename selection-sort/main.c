#include<stdio.h>
#define TAM 10

void selectionSort(int v[]) {
    int i = 0, j, indiceMenor, aux;

    for(i; i < TAM; i++) {
        indiceMenor = i;
        for(j = i + 1; j < TAM; j++) {
            if(v[j] < v[indiceMenor]) {
                indiceMenor = j;
            }
        }
        aux = v[i];
        v[i] = v[indiceMenor];
        v[indiceMenor] = aux;
    }
}

int main(void) {
    int v[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int i = 0;

    selectionSort(v);

    for(i; i < TAM; i++) {
        printf("%d \n", v[i]);
    }
}
