#include<stdio.h>
#define TAM 10

void insertionSort(int v[]) {
    int i = 0, j, aux;

    for(i; i < TAM; i++) {
        j = i;
        while(j > 0 && v[j - 1] > v[j]) {
            aux = v[j - 1];
            v[j - 1] = v[j];
            v[j] = aux;
            j = j - 1;
        }
    }
}

int main(void) {
    int v[TAM] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    int i = 0;

    insertionSort(v);

    for(i; i < TAM; i++) {
        printf("%d \n", v[i]);
    }
}
