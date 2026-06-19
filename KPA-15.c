#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
	printf("\n **************************************************** ");
	printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
	printf("\n* Programa KPA-15 - Quantas caixas cabem dentro do caminhão");	
	printf("\n *************************************************** \n");

	float altCaminhao, largCaminhao, compCaminhao;
	float altCaixa, largCaixa, compCaixa;
	float volCaminhaoCM3, volCaixaCM3;
	int totalCaixas;

	printf("--- DIMENSÕES DO CAMINHÃO (em metros) ---\n");
	printf("Digite a altura: ");
	scanf("%f", &altCaminhao);
	printf("Digite a largura: ");
	scanf("%f", &largCaminhao);
	printf("Digite o comprimento: ");
	scanf("%f", &compCaminhao);

	printf("\n--- DIMENSÕES DA CAIXA (em centímetros) ---\n");
	printf("Digite a altura: ");
	scanf("%f", &altCaixa);
	printf("Digite a largura: ");
	scanf("%f", &largCaixa);
	printf("Digite o comprimento: ");
	scanf("%f", &compCaixa);

	volCaminhaoCM3 = (altCaminhao * 100) * (largCaminhao * 100) * (compCaminhao * 100);
	volCaixaCM3 = altCaixa * largCaixa * compCaixa;

	totalCaixas = (int)(volCaminhaoCM3 / volCaixaCM3);

	printf("\n---------------- RESULTADO ----------------");
	printf("\n Volume do caminhão: %.2f cm³", volCaminhaoCM3);
	printf("\n Volume de cada caixa: %.2f cm³", volCaixaCM3);
	printf("\n Quantidade máxima de caixas transportadas: %d unidades\n", totalCaixas);
	printf("-------------------------------------------\n");

	return 0;
}
