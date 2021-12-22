#include<stdio.h>

int digitoMaisSignificativo(int);

int main(void) {
    int num;
    
    printf("Digite um numero: ");
    scanf("%d", &num);

    printf("O numero de digitos desse numero e: %d", digitoMaisSignificativo(num));

    return 0;
}

int digitoMaisSignificativo(int n) {
    if(n < 10) {
        return n;
    } else {
        digitoMaisSignificativo(n / 10);
    }
}