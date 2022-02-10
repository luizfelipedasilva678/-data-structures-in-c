#include<stdio.h>
#define TAM 10

void mergeSort(int []);
void mergeSortRec(int, int, int [], int);
void junta(int, int, int, int, int [], int);


int main(void) {
    int v[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    mergeSort(v);

    for(int i = 0; i < TAM; i++) {
        printf("%d\n", v[i]);
    }

    return 0;
}

void mergeSort(int v[]) {
    mergeSortRec(0, TAM - 1, v, TAM);
}

void mergeSortRec(int esq, int dir, int v[], int dimensao) {
    if( esq < dir ) {
        printf("(%d, %d) \n", esq, dir);
        int meio1 = (esq + dir) / 2;
        int meio2 = meio1 + 1;
        mergeSortRec(esq, meio1, v, dimensao);
        mergeSortRec(meio2, dir, v,  dimensao);
        junta(esq, meio1, meio2, dir, v, dimensao);
    } else {
        return;
    }
}

void junta(int esq, int meio1, int meio2, int dir, int v[], int dimensao) {
    int combinacao[dimensao];

    int indEsq = esq;
    int indDir = meio2;
    int indComb = esq;

    for(int k = esq; k <= dir; k++) {
        combinacao[k] = v[k];
    }

    while(indEsq <= meio1 && indDir <= dir) {
        if ( combinacao[indEsq] <= combinacao[indDir]) {
            v[indComb] = combinacao[indEsq];
            indEsq++;
        } else {
            v[indComb] = combinacao[indDir];
            indDir++;
        }
         indComb++;
    }

    while(indEsq <= meio1) {
        v[indComb] = combinacao[indEsq];

        indEsq++;
        indComb++;
    }

    while(indDir <= dir) {
        v[indComb] = combinacao[indDir];

        indDir++;
        indComb++;
    }
}
