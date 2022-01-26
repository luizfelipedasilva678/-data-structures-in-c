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

int buscaLinearOrdenada(int v[], int n) {
    int i = 0;

    while(v[i] < n && i < TAM) {
        i++;
    }

    if(v[i] == n) {
        return i;
    } else {
        return -1;
    }
}

int main(void) {
    int v[TAM] = {10, 9, 8, 7, 6, 100, 5, 4, 3, 2, 1};

    ordenaArray(v);
    printf("%d", buscaLinearOrdenada(v, 2));

    return 0;
}