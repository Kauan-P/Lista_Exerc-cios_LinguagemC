#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
printf("\n **************************************************** ");
printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
printf("\n* Programa KPA-31 - Contagem regressiva");	
printf("\n **************************************************** \n");	
	
	int i;
	
	for(i=10; i>0; i--){
		
		printf("\n %d", i);
		
	}
	
	
}
