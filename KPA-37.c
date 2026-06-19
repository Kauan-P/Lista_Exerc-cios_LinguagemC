#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main (){
	setlocale(LC_ALL, "portuguese");
	
printf("\n **************************************************** ");
printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
printf("\n* Programa KPA-37 - Soma de números até digitar zero");	
printf("\n **************************************************** \n");
	
	
	int i, soma;
	
	soma =0;
	
	printf("Digite um número: ");
		scanf("%d", &i);
	
	while(i != 0){
		
		soma += i;
		printf("Digite um número novamente: ");
		scanf("%d", &i);
	
		
	}

		printf("O valor da soma está dando: %d", soma);
	
}
