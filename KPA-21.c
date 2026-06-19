#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){

	setlocale(LC_ALL, "portuguese");

printf("\n **************************************************** ");
printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
printf("\n* Programa KPA-21 - Número positivo ou negativo");	
printf("\n **************************************************** \n");

int num;

	printf("Informe a quantia: ");
	scanf("%d", &num);

if(num > 0){

	printf("\n O número é positivo!");

} else if ( num < 0) {

	printf("\n O número é negativo!");

} else {

	printf("\n O número é 0");

}

}

