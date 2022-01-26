#include<stdio.h>
#define TAM 11

void ordenaArray(int v[]) {
    int i = 0, j, aux;

    for(i = 0; i < TAM; i++) {
        for(j = i + 1; j < TAM; j++) {
            if(v[i] > v[j]) {
                aux = v[j];
                v[j] = v[i];
                v[i] = aux;
            }
        }
    }
}

int buscaBinaria(int v[], int n) {
    int min = 0, max = TAM - 1, meio;

    while(min <= max) {
        meio = (min + max) / 2;

        if(v[meio] == n) {
            return meio;
        } else {
            if(n < v[meio]) {
                max = meio - 1;
            } else {
                min = meio + 1;
            }
        }
    }

    return -1;
}

int main(void) {
    int v[TAM] = {10, 9, 8, 7, 6, 100, 5, 4, 3, 2, 1};

    ordenaArray(v);
    printf("%d", buscaBinaria(v, 8));

    return 0;
}