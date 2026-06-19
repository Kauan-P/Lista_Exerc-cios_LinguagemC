#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){

	setlocale(LC_ALL, "portuguese");
	
printf("\n **************************************************** ");
printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
printf("\n* Programa KPA-20 - Ano bissexto");	
printf("\n **************************************************** \n");

int ano;

	printf("\n Digite um ano: ");
	scanf("%d", &ano); 

if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)){

	printf("\n O ano é bissexto!");

} else {

	printf("\n O ano não é bissexto!");


}

}
