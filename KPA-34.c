#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
printf("\n **************************************************** ");
printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
printf("\n* Programa KPA-34 - Verificar se um número é primo");	
printf("\n **************************************************** \n");
	
	
	int i, num, composto; 
	
	composto = 0;
	
	printf("Digite um número: ");
	scanf("%d", &num);
	
	
	
	for(i=2; i < num; i++){
		if(num % i == 0){
			
			composto = 1;
			break;
		}
	}
		
		if (composto == 1){
			
			printf("O número %d NÃO é um número primo", num);
		
		}	else {
			
			printf("O numero %d é um número primo", num);
			
		}
	
		return 0;
		
	}
	
	
	

