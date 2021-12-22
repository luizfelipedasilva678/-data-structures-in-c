#include<stdio.h>
#define TAM 5

int somaVetor(int v[], int i, int sum) {
    int contador = i;
    int total = sum;

    if( i == TAM ) {
        return sum; 
    } else {
        contador++;
        total += v[i];
        somaVetor(v, contador, total);
    }
}

int main(void) {
    int v[TAM] = {1, 2, 3, 4, 10};

    printf("Resultado -> %d", somaVetor(v, 0, 0));
    return 0;
}