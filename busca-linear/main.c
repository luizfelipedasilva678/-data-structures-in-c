#include<stdio.h>
#define TAM 10

int buscaLinear(int v[], int n) {
    int i = 0;

    for(i; i < TAM; i++) {
        if(v[i] == n) {
            return i;
        }
    }

    return -1;
}

int main(void) {
    int v[10] = {1,2,3,4,5,6,7,8,9,10};

    printf("%d", buscaLinear(v, 9));

    return 0;
}