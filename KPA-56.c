#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
	printf("\n **************************************************** ");
	printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
	printf("\n* Programa KPA-56 - O Menu do Fast-Food Digital");	
	printf("\n *************************************************** \n");

	int opcao;

	printf("\n --- MENU DE COMBOS ---");
	printf("\n 1 - Combo Hambúrguer + Batata + Refri");
	printf("\n 2 - Combo Pizza Brotinho + Refri");
	printf("\n 3 - Combo Salada + Suco Natural");
	printf("\n 4 - Combo Balde de Frango + Molho");
	printf("\n ------------------------------------");
	printf("\n Digite o número do combo desejado: ");
	scanf("%d", &opcao);

	switch(opcao) {
		case 1:
			printf("\n Você escolheu: Combo Hambúrguer + Batata + Refri - R$ 30,00\n");
			break;
		case 2:
			printf("\n Você escolheu: Combo Pizza Brotinho + Refri - R$ 25,00\n");
			break;
		case 3:
			printf("\n Você escolheu: Combo Salada + Suco Natural - R$ 22,00\n");
			break;
		case 4:
			printf("\n Você escolheu: Combo Balde de Frango + Molho - R$ 35,00\n");
			break;
		default:
			printf("\n Opção inválida! Escolha de 1 a 4.\n");
			break;
	}

	return 0;
}
