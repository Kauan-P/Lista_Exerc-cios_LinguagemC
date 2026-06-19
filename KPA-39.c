#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
printf("\n **************************************************** ");
printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
printf("\n* Programa KPA-39 - Verificar se um número é positivo");	
printf("\n **************************************************** \n");


 int i;
 
 	printf("Digite um número inteiro: ");
 	scanf("%d", &i);

	while(i<0){
		
		printf("\n O número digitado é menor do que zero!\n Digite novamente: ");
		scanf("%d", &i);
		
	}
	 	printf("\n O número positivo digitado foi %d", i);

}
