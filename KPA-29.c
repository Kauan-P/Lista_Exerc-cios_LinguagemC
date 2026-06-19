#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	
	setlocale(LC_ALL, "portuguese");
	
printf("\n **************************************************** ");
printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
printf("\n* Programa KPA-29 - Números pares de 0 a 50");	
printf("\n **************************************************** \n");	

	int i;

	for(i=0; i<=50; i++){
		
		if(i % 2 == 0){
			
			printf("\n %d", i);
			
			
		}
		
		
		
		
	}
	
	
}
