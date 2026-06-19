#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
printf("\n **************************************************** ");
printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
printf("\n* Programa KPA-44 - Contar dígitos de um número");	
printf("\n *************************************************** \n");

	int copia, num, digitos;
	
	printf("Informe um número: "); 
	scanf("%d", &num);
	
	copia = num;
	digitos = 0;
	
	while(copia>0){
		digitos++; 
		
		copia /= 10;
		
	}
	
	printf("O numero %d, possui %d digitos!", num, digitos);

}
