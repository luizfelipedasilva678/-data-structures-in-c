#include <stdio.h>
#define LENGTH 3

void readValues(int v[], int i) {
    int counter = i, number;

    if( i == LENGTH ) {
        return;
    } else {
        printf("Digite um numero: ");
        scanf("%d", &number);

        counter++;
        v[i] = number;
        readValues(v, counter);
    }
}

int numberOfTimesTheNumberAppeared(int v[], int n, int i, int total) {
    int counter = i, totalTimes = total;

    if( i == LENGTH ) {
        return totalTimes;
    } else {
        counter++;
        if(v[i] == n) {
            totalTimes += 1;
        }
        numberOfTimesTheNumberAppeared(v, n, counter, totalTimes);
    }
}

int calculatesConsecutiveEqualNumbers(int v[], int next, int i, int total) {
    int counter = i, totalTimes = total;

    if( i == LENGTH ) {
        return totalTimes;
    } else {
        counter++;

        if(next <= LENGTH - 1) {
            if(v[i] == v[next]) {
                totalTimes += 1;
            }
        }
        calculatesConsecutiveEqualNumbers(v, next + 1, counter, totalTimes);
    }
}

int main()
{
    int v[LENGTH], n;

    readValues(v, 0);

    printf("Digite um numero para testar: ");
    scanf("%d", &n);
    printf("\n");
    printf("O numero de vezes que o %d apareceu foi: %d\n", n, numberOfTimesTheNumberAppeared(v, n, 0, 0));
    printf("Numero iguais consecutivos: %d\n", calculatesConsecutiveEqualNumbers(v, 1, 0, 0));

    return 0;
}
