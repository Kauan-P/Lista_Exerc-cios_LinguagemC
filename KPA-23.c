#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");

printf("\n **************************************************** ");
printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
printf("\n* Programa KPA-23 - Maior de dois números");	
printf("\n **************************************************** \n");

float pontuacao1, pontuacao2;

	printf("\n Qual o valor da primeira pontuação: ");
	scanf("%f", &pontuacao1);

	printf("\n Qual o valor da segunda pontuação: ");
	scanf("%f", &pontuacao2);

if (pontuacao1 > pontuacao2){

	printf("\n A maior pontuação foi a pontuação %f", pontuacao1);
 
} else {

	printf("\n A maior pontuação foi a pontuaçaõ %f", pontuacao2);

}

}
