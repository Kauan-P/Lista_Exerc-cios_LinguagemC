#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
printf("\n **************************************************** ");
printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
printf("\n* Programa KPA-42 - Quantidade de números ímpares digitados");	
printf("\n *************************************************** \n");

	int  quant, i, num;
	
	i = 1;
	quant = 0;
	
	while(i <= 10){
		
		printf("\n Informe o %d° valor: ", i);
		scanf("%d", &num);
		
		i++; 
		if(num % 2 == 1){
			
			quant += 1;
			
		}
			
	}
		
		printf("\n Tem %d numeros ímpares! ", quant);


}
