#include<stdio.h>
#include<stdlib.h>

#define TAM 3 

float pesoMedio(int [], float []);

int main(void) {
	int idades[TAM], i = 0;
	float pesos[TAM], md;
	
	for(i; i < TAM; i++) {
		printf("Digite a idade da pessoa %d: ", i);
		scanf("%d", &idades[i]);
		
		printf("Digite o peso da pessoa %d: ", i);
		scanf("%f", &pesos[i]);
	}
	
	md = pesoMedio(idades, pesos);
	
	
	printf("A media dos pesos das pessoas com mais de 30 anos e: %f", md);
	
	return 0;
}

float pesoMedio(int idades[], float pesos[]) {
	int i = 0, numPessoasComMaisDe30 = 0;
	float md = 0;
	
	for(i; i < TAM; i++) {
		if(idades[i] > 30) {
			md += pesos[i];
			numPessoasComMaisDe30++;
		}
	}
	
	return	md/numPessoasComMaisDe30;
}
