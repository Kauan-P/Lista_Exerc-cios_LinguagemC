#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
	printf("\n **************************************************** ");
	printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
	printf("\n* Programa KPA-55 - Ler números e mostrar o maior (até digitar negativo)");	
	printf("\n *************************************************** \n");

	float nota, maior;
	
	maior = -1; 
	
	printf("Informe uma nota (ou um número negativo para sair): ");
	scanf("%f", &nota);
	
	while (nota >= 0) {
		if (nota > maior) {
			maior = nota;
		}
		
		printf("Informe a próxima nota (ou um número negativo para sair): ");
		scanf("%f", &nota);
	}
	
	if (maior != -1) {
		printf("\nA maior nota positiva informada foi: %.2f\n", maior);
	} else {
		printf("\nNenhuma nota positiva foi informada.\n");
	}

	return 0;
}
