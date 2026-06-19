#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
printf("\n **************************************************** ");
printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
printf("\n* Programa KPA-38 - Senha correta");	
printf("\n **************************************************** \n");

	int senha, i;
	
	senha = 1234;
	
	printf("\n Digite a senha do seu login: ");
	scanf("%d", &i);
	
	while(i != senha){
		
		printf("\n A senha está incorreta!");
		
		printf("\n Digite a senha novamente: ");
		scanf("%d", &i);
		
		
	}
	
	printf("\n A senha está correta! Login feito com sucesso!");



}
