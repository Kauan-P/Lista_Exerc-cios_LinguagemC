#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
		
printf("\n **************************************************** ");
printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
printf("\n* Programa KPA-30 - Fatorial de um número");	
printf("\n **************************************************** \n");	

	int num, fatorial, i;
	
	printf("Informe o valor do número: ");
	scanf("%d", &num);
	
	fatorial = 1;

	for(i = num; i >= 1; i--){
		
	 	fatorial *= i;
		
		printf("\n %d", fatorial);

	 	
}
	
}
