#include <stdio.h>
#include <stdlib.h>
#include "calculaNota.h"
#include "calculaPercentualAprovados.h"
#include "inicializa.h"
#define SIZE 3

int main(void) {
	int aluno, gabarito[SIZE], respostas[SIZE], i = 0, totalAlunos = 0, totalAprovados = 0, frequencia[11], maior = 0;
	inicializa(frequencia, 11);
	
	for(i; i < SIZE; i++) {
		printf("Digite o gabarito da questao %d: ", i);
		scanf("%d", &gabarito[i]);
	}
	
	printf("Digite o numero do aluno (0 para terminar): ");
	scanf("%d", &aluno);	
	while(aluno != 0) {
		
		totalAlunos++;
		
		i = 0;
		for(i; i < SIZE; i++) {
			printf("Digite as respostas do aluno %d: ", aluno);
			scanf("%d", &respostas[i]);
		}
		
		printf("Nota do aluno %d e: %d \n", aluno, calculaNota(gabarito, respostas, SIZE));
		
		if(calculaNota(gabarito, respostas, SIZE) >= 2) {
			totalAprovados++;
		}
		
		frequencia[calculaNota(gabarito, respostas, SIZE)]++;
 		
		printf("Digite o numero do aluno (0 para terminar): ");
		scanf("%d", &aluno);	
	}
	printf("Percentual de aprovados: %f \n", calculaPercentualAprovados(totalAlunos, totalAprovados));
	
	i = 0;
	for(i; i < 11; i++) {
		if(frequencia[i] > maior) {
			maior = frequencia[i];
		}
	}
	printf("A nota que apareceu mais vezes foi a %d", maior);
	
	return 0;
}
