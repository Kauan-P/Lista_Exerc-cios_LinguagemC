#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	printf("\n **************************************************** ");
	printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
	printf("\n* Programa KPA-14 - Tipo de Triângulo");	
	printf("\n **************************************************** \n");
	
	float l1, l2, l3;
	
	printf("\n Digite o valor do lado 1: ");
	scanf("%f", &l1);
	
	printf("\n Digite o valor do lado 2: ");
	scanf("%f", &l2);
	
	printf("\n Digite o valor do lado 3: ");
	scanf("%f", &l3);
	
	
	if(l1 == l2 && l2==l3){
		
		printf("\n Esse triângulo é equilátero! ");
		
	} else if(l1 == l2 || l2==l3 || l1==l3){
		
		printf("\n Esse triângulo é isósceles! ");

	} else {
		
		printf("\n Esse triângulo é Escaleno! ");
		
	}
}
