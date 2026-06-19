#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
printf("\n **************************************************** ");
printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
printf("\n* Programa KPA-52 - Soma até o número ser múltiplo de 10");	
printf("\n *************************************************** \n");

	int i, soma;
	
	soma = 0;
	
	do{
		printf("\n Informe o valor do número: ");
		scanf("%d", &i);
		
		soma += i;
		
		
		
	}while(i %  10 != 0);
	
	printf("\n O total da soma de todos os números não múltiplos de 10 é: %d", soma);



}
