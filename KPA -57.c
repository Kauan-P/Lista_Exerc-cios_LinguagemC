#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<string.h> 

int main (){
	setlocale(LC_ALL, "portuguese");
	
	printf("\n **************************************************** ");
	printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
	printf("\n* Programa KPA-57 - A Central do Brinquedo Eletrônico");	 
	printf("\n *************************************************** \n");
	
	char cor[20]; 
	
	printf("Que cor acendeu na barriga do urso? (verde, amarelo, vermelho): ");
	scanf("%s", cor);
	
	if (strcmp(cor, "verde") == 0) {
		printf("\nO urso diz: \"Vamos brincar lá fora!\"\n");
		
	} else if (strcmp(cor, "amarelo") == 0) {
		printf("\nO urso diz: \"Estou ficando com soninho...\"\n");
		
	} else if (strcmp(cor, "vermelho") == 0) {
		printf("\nO urso diz: \"Estou com fome, hora do lanche!\"\n");
		
	} else {
		printf("\n[Luzes piscando] Cor desconhecida!\n");
	}
	
	return 0;	
}
