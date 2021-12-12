#include<stdio.h>
#include<stdlib.h>

float calculaTotalDoPrazo(float, float, int);

int main(void) {
	float valorASerEmprestado, taxaDeJuros, totalDoPrazo;
	int periodoDePagamento;
	
	printf("Digite o valor a ser emprestado: ");
	scanf("%f", &valorASerEmprestado);
	
	printf("Digite a taxa de juros cobrados: ");
	scanf("%f", &taxaDeJuros);
	
	printf("Digite o periodo de pagamento: ");
	scanf("%d", &periodoDePagamento);
	
	totalDoPrazo = calculaTotalDoPrazo(valorASerEmprestado, taxaDeJuros, periodoDePagamento);
	
	printf("Valor a ser pago no final do prazo: %f", totalDoPrazo);
	
	return 0;
}

float calculaTotalDoPrazo(float valorEmprestado, float taxaDeJuros, int periodoParaPagamento) {
	int i = 0;
	float valorMes[periodoParaPagamento];
	
	while(i < periodoParaPagamento) {
		if(i >= 1) {
			valorMes[i] = valorMes[i - 1] + (valorMes[i - 1] * (taxaDeJuros/100));
		} else {
			valorMes[i] = valorEmprestado + (valorEmprestado * (taxaDeJuros/100));
		}
		
		
		i++;
	}	
	
	return valorMes[periodoParaPagamento - 1];
}
