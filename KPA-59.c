#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
	printf("\n **************************************************** ");
	printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
	printf("\n* Programa KPA-59 - O Assistente de Direção (GPS Sem Mapa)");	
	printf("\n *************************************************** \n");

	char direcao;

	printf("Digite a letra da placa de direção (N, S, L, O): ");
	scanf(" %c", &direcao); 

	switch(direcao) {
		case 'N':
			printf("\n Comando de voz: \"Seguir para o Norte.\"\n");
			break;
			
		case 'S':
			printf("\n Comando de voz: \"Seguir para o Sul.\"\n");
			break;
			
		case 'L':
			printf("\n Comando de voz: \"Virar à Leste (Direita).\"\n");
			break;
			
		case 'O':
			printf("\n Comando de voz: \"Virar à Oeste (Esquerda).\"\n");
			break;
			
		default:
			printf("\n Comando inválido! Pare o robô.\n");
			break;
	}

	return 0;
}
