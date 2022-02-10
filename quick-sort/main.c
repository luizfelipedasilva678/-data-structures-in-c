#include<stdio.h>
#define TAM  10

void quickSort(int [], int);
void quickSortRec(int [], int, int);
int particao(int [], int, int);

int main(void) {
    int v[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    quickSort(v, TAM);

    for(int i = 0; i < TAM; i++) {
        printf("%d\n", v[i]);
    }

    return 0;
}

int particao(int v[], int esq, int dir) {
    int idPivo = esq;
    int aux;

    for(int i = esq + 1; i <= dir; i++) {
        if(v[i] < v[esq]) {
            idPivo++;
            aux = v[idPivo];
            v[idPivo] = v[i];
            v[i] = aux;
        }
    }

    aux = v[esq];
    v[esq] = v[idPivo];
    v[idPivo] = aux;

    return idPivo;
}

void quickSort(int v[], int dimensao) {
    quickSortRec(v, 0, dimensao - 1);
}

void quickSortRec(int v[], int esq, int dir) {
    if(esq < dir) {
        int pivo = particao(v, esq, dir);
        quickSortRec(v, esq, pivo - 1);
        quickSortRec(v, pivo + 1, dir);
    } else {
        return;
    }
}

