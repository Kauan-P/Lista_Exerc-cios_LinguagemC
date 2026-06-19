#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
	printf("\n **************************************************** ");
	printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
	printf("\n* Programa KPA-60 - O Validador de Dias Úteis");	
	printf("\n *************************************************** \n");

	int dia;

	printf("Digite o número do dia da semana (1-Domingo a 7-Sábado): ");
	scanf("%d", &dia);

	switch(dia) {
		// Agrupamento dos dias úteis
		case 2:
		case 3:
		case 4:
		case 5:
		case 6:
			printf("\n Dia Útil. Acesso liberado para o trabalho.\n");
			break;
			
		// Agrupamento do fim de semana
		case 1:
		case 7:
			printf("\n Fim de Semana. Prédio fechado.\n");
			break;
			
		default:
			printf("\n Número de dia inválido.\n");
			break;
	}

	return 0;
}
