#include<stdio.h>
#include<stdlib.h>
#include<locale.h>


int main (){
	setlocale(LC_ALL, "portuguese");
	
printf("\n **************************************************** ");
printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
printf("\n* Programa KPA-35 - Números de Fibonacci (n termos)");	
printf("\n **************************************************** \n");
	
	int termo1, termo2, proximo, n, i;
	
	termo1 = 0;
	termo2 = 1;

	
	printf("Informe o valor que deseja: ");
	scanf("%d", &n);
	
	
	for(i = 1; i <= n; i++){
		
		printf("%d ", termo1);
		
		
		proximo = termo1 + termo2;
		termo1 = termo2;
		termo2= proximo;

	}
	return 0;
	
}
