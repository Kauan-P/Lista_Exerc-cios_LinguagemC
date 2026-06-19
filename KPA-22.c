#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "portuguese");
	
printf("\n **************************************************** ");
printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
printf("\n* Programa KPA-22 - Par ou ímpar");	
printf("\n **************************************************** \n");

int num;

	printf("\n Difite a sua classificação: ");
	scanf("%d", &num);

if (num % 2 == 0){

	printf("\n O número é par!");

} else {

	printf("\n O número é ímpar");

}


}
