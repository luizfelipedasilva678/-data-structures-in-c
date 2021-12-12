#include<stdio.h>
#include<stdlib.h>

int ehPrimo(int);

int main(void) {
    int numero;

    printf("Digite um numero: ");
    scanf("%d", &numero);
    
    if(ehPrimo(numero) > 2) {
        printf("Esse numero nao e primo");
    } else {
        printf("Esse numero e primo");
    }

    return 0;
}

int ehPrimo(int numero) {
    int i = 1, numeroDeDivisores = 0;

    while(i <= numero) {
        if(numero % i == 0) {
            numeroDeDivisores++;
        }

        i++;
    }

    return numeroDeDivisores;
}
