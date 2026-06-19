#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
printf("\n **************************************************** ");
printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
printf("\n* Programa KPA-24 - Pode votar?");	
printf("\n **************************************************** \n");

int idade;

	printf("\n Qual seria a idade do cidadão? ");
	scanf("%d", &idade);

if(idade >= 16 && idade < 18){

	printf("\n O cidadão pode votar, mas não é obrigatório!");

} else if (idade >= 18){

	printf("\n O cidadão deve votar, é obrigatório!");

} else {

	printf("\n O cidadão não pode votar!");

}
}
1
