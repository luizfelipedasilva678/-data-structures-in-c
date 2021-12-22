#include<stdio.h>

int numeroDeDigitos(int, int);

int main(void) {
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("O numero de digitos desse numero e: %d", numeroDeDigitos(num, 1));

    return 0;
}

int numeroDeDigitos(int n, int cont) {
    int contador = cont;
    
    if(n < 10) {
        return contador;
    } else {
        contador++;
        numeroDeDigitos(n / 10, contador);
    }
}