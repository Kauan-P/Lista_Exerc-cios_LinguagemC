#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
printf("\n **************************************************** ");
printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
printf("\n* Programa KPA-46 - Contar de 1 a 10");	
printf("\n *************************************************** \n");

	int i;
	i = 0;
	
	do{
		printf("\n %d", i);
		i++;	
		
	} while(i <=10);



}
