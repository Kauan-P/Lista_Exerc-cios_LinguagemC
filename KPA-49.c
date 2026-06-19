#include<stdio.h>
#include<stdlib.h>
#include<locale.h>

int main (){
	setlocale(LC_ALL, "portuguese");
	
printf("\n **************************************************** ");
printf("\n* Aluno: KAUAN PERES DE ALCANTARA - RA> 0025801 ");
printf("\n* Programa KPA-49 - Pedir senha até acertar");	
printf("\n *************************************************** \n");

	int senha, i; 
	
	senha = 1111;
	
	
	do{
		printf("\n  Digite a senha do usuário: ");
		scanf("%d", &i);		
		
		if(i!=senha){
			
			printf("\n A senha está errada, tente novamente!");
			
		}
		
	} while( i!=senha);
	
	printf("\n A senha está correta. Login efetuado com sucesso!"); 


}
