#include<stdio.h>

int multiplicacao(int x, int y, int result) {
    if(y == 0) {
        return result;
    } else {
        multiplicacao(x, y - 1, result + x);
    }
}

int main(void) {
    printf("Resultado %d", multiplicacao(3,10,0));
    return 0;
}