#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
printf("\n **************************************************** ");
printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
printf("\n* Programa KPA-41 - Número primo com while");	
printf("\n **************************************************** \n");

	int i, num, composto;
	
	composto = 0;
	
	printf("Informe um número: ");
	scanf("%d", &num);
	i = 2; 
	while(i<num){
		
		if(num % i == 0){
			
			composto = 1;
			break;
			
		}
		i++;	
	}
	
		if(composto == 1){
			
			printf("O número %d não é primo! ", num);
			 
		} else {
			
			printf("O número %d é primo!", num); 
			
		}






}
