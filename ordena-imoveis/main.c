#include <stdio.h>
#define TAM 10

struct _Imovel {
    int imovelId;
    int numeroDeQuartos;
    float area;
    float preco;
} typedef Imovel;

/* Utilizei o bubbleSort */
void ordenaImoveis(Imovel v[]) {
    int trocou = 1;
    Imovel aux;

    while(trocou == 1) {
        trocou = 0;
        for(int i = 1; i < TAM; i++) {
            if(v[i].preco > v[i - 1].preco) {
                aux = v[i];
                v[i] = v[i - 1];
                v[i - 1] = aux;
                trocou = 1;
            }
        }
    }
}

void exibeDados(Imovel imoveis[]) {
    printf("Imovel\t\tNumero de quartos\tArea(m2)\tPreco(R$)\n");
    for(int i = 0; i < TAM; i++) {
        printf("%d\t\t%d\t\t\t%.1f\t\t%.2f \n", imoveis[i].imovelId,  imoveis[i].numeroDeQuartos, imoveis[i].area, imoveis[i].preco);
    }
}

int main()
{
    Imovel imoveis[TAM], imovel;

    int numeroDeQuartos[TAM] = {2, 1, 3, 3, 2, 3, 2, 4, 2, 6};
    float areas[TAM] = { 90.1, 52.9, 120.8, 105.0, 162.3, 100.0, 150.2, 133.2, 80.5, 234.0 };
    float precos[TAM] = { 450000.00, 250000.00, 580000.00, 575000.00, 350000.00, 480000.00, 250000.00, 600000.00, 480000.00, 800000.00 };

    for(int i = 0; i < TAM; i++) {
        imovel.imovelId = i + 1;
        imovel.numeroDeQuartos = numeroDeQuartos[i];
        imovel.area = areas[i];
        imovel.preco = precos[i];

        imoveis[i] = imovel;
    }

    ordenaImoveis(imoveis);
    exibeDados(imoveis);

    return 0;
}
