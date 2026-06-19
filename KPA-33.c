#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
printf("\n **************************************************** ");
printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
printf("\n* Programa KPA-33 - Múltiplos de 3 entre 1 e 30");	
printf("\n **************************************************** \n");
	
	int i; 
	
	for(i=1; i<=30; i++){
		if(i % 3 ==0){
			
			printf("\n %d", i);
			
			
		}
				
		
	}
	
	
}
