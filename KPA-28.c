#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){

	setlocale(LC_ALL, "portuguese");
	
printf("\n **************************************************** ");
printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
printf("\n* Programa KPA-28 - Soma dos 100 primeiros números naturais");	
printf("\n **************************************************** \n");	

int soma, i;

soma = 0;

for(i =1; i <= 100; i++){

	soma = soma + i;
	
}
	printf("O resultado da soma dos números de 1 até 100 é: %d", soma );

}
