#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
printf("\n **************************************************** ");
printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
printf("\n* Programa KPA-32 - Quadrado dos números de 1 a 10");	
printf("\n **************************************************** \n");

	int i;
	
	
	for(i = 1; i<=10; i++){		
		
		printf("\n  o quedrado do número %d é %d", i, i*i);
		
		
	}
	
	
	
	
	
}
