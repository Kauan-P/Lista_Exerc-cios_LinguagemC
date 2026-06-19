#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
printf("\n **************************************************** ");
printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
printf("\n* Programa KPA-43 - Soma dos pares entre 1 e 100");	
printf("\n *************************************************** \n");


	int soma, i; 
	
	soma =0;
	i = 0;
	
	while(i<=100){
		i++;
		
		if(i % 2 == 0){
			
			printf("\n %d", i);
			soma = soma + i; 
			
		}
	
		
	}

	printf("\n\n O valor de todos o números pares de 1 a 100 é: %d", soma);

}
