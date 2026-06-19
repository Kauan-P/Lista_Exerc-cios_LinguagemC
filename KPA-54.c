#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
	printf("\n **************************************************** ");
	printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
	printf("\n* Programa KPA-54 - Validar número entre 1 e 5");	
	printf("\n *************************************************** \n");

	int nivel;

	do {
		printf("\nInforme o nível de dificuldade desejado (1 a 5): ");
		scanf("%d", &nivel);

		if (nivel < 1 || nivel > 5) {
			printf("[ERRO] Opção inválida! Tente novamente.\n");
		}

	} while (nivel < 1 || nivel > 5);

	printf("\n[Sucesso] Nível %d selecionado. Bom jogo!\n", nivel);

	return 0;
}
