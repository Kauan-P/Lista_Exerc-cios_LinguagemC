#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
printf("\n **************************************************** ");
printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
printf("\n* Programa KPA-50 - Número positivo obrigatório");	
printf("\n *************************************************** \n");

 int num; 
 
 
	do{
		printf("Informe o valor do seu deposito: ");
		scanf("%d", &num);
		
		if (num <= 0) {
			
			printf("\n Valor para inválido para depósito!");
			
		}
		
	} while(num <= 0);

	printf("O valor de %d foi depositado com sucesso! ", num);

}
